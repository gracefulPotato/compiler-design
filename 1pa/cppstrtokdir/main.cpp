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

string check_options(int argc, char** argv){
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
               //strcpy(tmparg,optarg);
               //string opt(optarg);
               //set_debugflags(*optarg);
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
               fprintf(stderr,"option D used!\n");
               d_args = "-D"+string(optarg)+" ";
               break;
       }
   }
   return d_args;
}

string check_filename(string dotstr){
   cout<<"dotstr: "<<dotstr<<"\n";
   if(dotstr.find('.')==std::string::npos){
       fprintf(stderr,"Usage is\noc -ly <program>.oc\nExiting with status 1\n");
       return "EXIT_FAILURE";
   }
   int dot_index = dotstr.find_last_of(".");
   dotstr=dotstr.substr(0,dot_index)+".str";
   cout<<"dotstr mark 2: "<<dotstr<<"\n";
   return dotstr;
}

int main(int argc, char** argv){
   string execname = basename (argv[0]);
   int exit_status = EXIT_SUCCESS;
   string d_args = check_options(argc, argv);
   int fileindex = argc-1;
   string dotstr = check_filename(argv[fileindex]);
   if(dotstr.compare("EXIT_FAILURE")){
       return EXIT_FAILURE;
   }
   FILE * outfile = fopen(dotstr.c_str(),"w");
   string procline;
   pair<string,int> cpp_ret = cpp_line(fileindex,argv,
       execname,exit_status,d_args);
   if(cpp_ret.second==EXIT_FAILURE){
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
