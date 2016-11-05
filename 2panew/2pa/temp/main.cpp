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
#include "auxlib.h"
#include "astree.h"
const string CPP = "/usr/bin/cpp";
constexpr size_t LINESIZE = 1024;
FILE* tok;
FILE* outfile;

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

// Run cpp against the lines of the file.
void cpplines (){
   for (;;) {   //infinite loop
      int token = yylex();
      if(token==YYEOF) break;
   }
   string_set::dump (outfile);
}


pair<string,int> cpp_line(char* filenm,string exec,
    int extstat,string d){
    string command = CPP + " " + d + filenm;
    string procline="command=\""+command+"\"\n";
    yyin = popen (command.c_str(), "r");
    if (yyin == NULL) {
         extstat = EXIT_FAILURE;
         fprintf (stderr, "%s: %s: %s\n",
                  exec.c_str(), command.c_str(), strerror (errno));
    }else {
         cpplines();
         int pclose_rc = pclose (yyin);
         eprint_status (command.c_str(), pclose_rc);
         if (pclose_rc != 0) extstat = EXIT_FAILURE;
    }
   pair<string,int> rettomain = pair<string,int>(procline, extstat);
   return rettomain;
}

bool file_exists(const char *file){
    std::ifstream infile(file);
    return infile.good();
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
   if(file_exists(tokstr.c_str())) remove(tokstr.c_str());
   tok = fopen(tokstr.c_str(),"w");
   return dotstr;
}

int main(int argc, char** argv){
   exec::execname = basename (argv[0]);
   int exit_stat = EXIT_SUCCESS;
   int option;
   yy_flex_debug = 0;
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
   outfile = fopen(dotstr.c_str(),"w");
   string procline;
   char* file = argv[fileindex];
   pair<string,int> cpp_ret = cpp_line(file,exec::execname,
       exit_stat,d_args);
   if(cpp_ret.second==EXIT_FAILURE){
       exit_stat = cpp_ret.second;
       fprintf(stderr,"Exiting with status %d\n",exit_stat);
       return exit_stat;
   }
   fclose(outfile);
   fclose(tok);
   fprintf(stderr,"Exiting with status %d\n",exit_stat);
   return exit_stat;
}
