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

#include "string_set.h"
#include "cppstrtok.h"
#include "auxlib.h"

string check_filename(string dotstr){
   //dotstr = string(basename(dotstr.c_str()));
   if(dotstr.find(".oc")==std::string::npos){
       fprintf(stderr,"Usage is\noc -ly <program>.oc\n");
       fprintf(stderr,"Exiting with status 1\n");
       return "EXIT_FAILURE";
   }
   int dot_index = dotstr.find_last_of(".");
   dotstr=dotstr.substr(0,dot_index)+".str";
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
   pair<string,int> cpp_ret = cpp_line(fileindex,argv,
       execname,exit_status,d_args);
   if(cpp_ret.second==EXIT_FAILURE){
       exit_status = cpp_ret.second;
       fprintf(stderr,"Exiting with status %d\n",exit_status);
       return exit_status;
   }
   istringstream iss(cpp_ret.first);
   string line;
   while(getline(iss,line)){
       //const char* tmp = line.c_str();
       string_set::intern (line.c_str());
   }
   string_set::dump (outfile);
   fclose(outfile);
   fprintf(stderr,"Exiting with status %d\n",exit_status);
   return exit_status;
}
