#include <unistd.h>
#include <string>
#include <fstream>
#include <string.h>
#include <errno.h>
#include <libgen.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wait.h>
#include <iostream>
#include <sstream>
#include <typeinfo>
using namespace std;

#include "lyutils.h"
#include "string_set.h"
#include "cppstrtok.h"
#include "auxlib.h"
#include "astree.h"
const string CPP = "/usr/bin/cpp";
constexpr size_t LINESIZE = 1024;

// Chomp the last character from a buffer if it is delim.
void chomp (char* string, char delim) {
   size_t len = strlen (string);
   if (len == 0) return;
   char* nlpos = string + len - 1;
   if (*nlpos == delim) *nlpos = '\0';
}

// Print the meaning of a signal.
static void eprint_signal (const char* kind, int signal) {
   fprintf (stderr, ", %s %d", kind, signal);
   const char* sigstr = strsignal (signal);
   if (sigstr != NULL) fprintf (stderr, " %s", sigstr);
}
void eprint_status (const char* command, int status) {
   if (status == 0) return;
   fprintf (stderr, "%s: status 0x%04X", command, status);
   if (WIFEXITED (status)) {
      fprintf (stderr, ", exit %d", WEXITSTATUS (status));
   }
   if (WIFSIGNALED (status)) {
      eprint_signal ("Terminated", WTERMSIG (status));
      #ifdef WCOREDUMP
      if (WCOREDUMP (status)) fprintf (stderr, ", core dumped");
      #endif
   }
   if (WIFSTOPPED (status)) {
      eprint_signal ("Stopped", WSTOPSIG (status));
   }
   if (WIFCONTINUED (status)) {
      fprintf (stderr, ", Continued");
   }
   fprintf (stderr, "\n");
}
pair<string,int> cpp_line(int i,char** argv,string exec,
    int extstat,string d){
    char* filename = argv[i];
    string command = CPP + " " + d + filename;
    string procline="command=\""+command+"\"\n";//, command.c_str());
    yyin = popen (command.c_str(), "r");
    if (yyin == NULL) {
         extstat = EXIT_FAILURE;
         fprintf (stderr, "%s: %s: %s\n",
                  exec.c_str(), command.c_str(), strerror (errno));
    }else {
         fprintf(stderr,"yyin not null\n");
         char buffer[1024];
         char* fgets_rc = fgets (buffer, 1024, yyin);
         fprintf(stderr,"yyin line: %s\n",fgets_rc);

         //FILE* tokstrfile = fopen(tokstr.c_str(),"w+");
         //fprintf(tokstrfile,"test");
         //fclose(tokstrfile);
         //procline = procline + cpplines (yyin, filename,procline);
         while(true){
             fprintf(stderr,"beginning yylex while loop iteration\n");
             //astree::dump(testout,yylval);
             int token=yylex();
             if(token==YYEOF) break;
             string tmp = to_string(token);
             fprintf(stderr,"yylval::symbol result: %s\n",get_yytname(token));//lexinfo->c_str());
             std::ofstream outfile;
             outfile.open(tokstr, ios::app);
             std::string stryytext(yytext);
             outfile << "  "<<token<<"  "<<get_yytname(token)<<"  ("+stryytext+")\n";
             string_set::intern(tmp.c_str());
         }
         int pclose_rc = pclose (yyin);
         eprint_status (command.c_str(), pclose_rc);
         if (pclose_rc != 0) extstat = EXIT_FAILURE;
    }
   pair<string,int> rettomain = pair<string,int>(procline, extstat);
   return rettomain;
}

string check_filename (string dotstr){
   //dotstr = string(basename(dotstr.c_str()));
   if(dotstr.find(".oc")==std::string::npos){
       fprintf(stderr,"Usage is\noc -ly <program>.oc\n");
       fprintf(stderr,"Exiting with status 1\n");
       return "EXIT_FAILURE";
   }
   int dot_index = dotstr.find_last_of(".");
   dotstr=dotstr.substr(0,dot_index)+".str";
   tokstr=dotstr.substr(0,dot_index)+".tok";
   cout<<"tokstr: "<<tokstr<<"\n\n";
   return dotstr;
}

int main(int argc, char** argv){
   string execname = basename (argv[0]);
   int exit_status = EXIT_SUCCESS;
   int option;
   int yy_flex_debug = 0;
   int yydebug = 0;
   string d_args="";
   while((option=getopt(argc,argv,"lyD:@:"))!=-1){
       if(option==EOF) break;
       switch(option){
           case '@':
           {
               fprintf(stderr,"option @ used with optarg %s\n",optarg);
               set_debugflags(optarg);
               break;
           }
           case 'l':
               fprintf(stderr,"flag l used!\n");
               yy_flex_debug = 1;
               fprintf(stderr,"yy_flex_debug set to %d",yy_flex_debug);
               break;
           case 'y':
               fprintf(stderr,"flag y used!\n");
               yydebug = 1;
               fprintf(stderr,"yydebug set to %d",yydebug);
               break;
           case 'D':
               fprintf(stderr,"option D used with optarg %s\n",optarg);
               d_args = "-D"+string(optarg)+" ";
               break;
       }
   }
   int fileindex = argc-1;
   string dotstr = check_filename(basename(argv[fileindex]));
   if(dotstr.compare("EXIT_FAILURE")==0){
       return EXIT_FAILURE;
   }
   cout<<dotstr;
   FILE * outfile = fopen(dotstr.c_str(),"w");
   string procline;
   pair<string,int> cpp_ret = cpp_line(fileindex,argv,execname,exit_status,d_args);
   if(cpp_ret.second==EXIT_FAILURE){
       exit_status = cpp_ret.second;
       fprintf(stderr,"Exiting with status %d\n",exit_status);
       return exit_status;
   }
   istringstream iss(cpp_ret.first);
   string line;
   while(getline(iss,line)){
       //const char* tmp = line.c_str();
       string_set::intern(line.c_str());
   }
   string_set::dump (outfile);
   while(true){
       int token = yylex ();
       if(token==YYEOF) break;
   }
   fclose(outfile);
   fprintf(stderr,"Exiting with status %d\n",exit_status);
   return exit_status;
}
