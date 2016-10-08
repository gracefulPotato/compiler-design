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

int main(int argc, char** argv){
   string execname = basename (argv[0]);
   int exit_status = EXIT_SUCCESS;
   int option;
   //const char* tmparg;
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
               break;
           case 'y':
               fprintf(stderr,"flag y used!\n");
       	       break;
           case 'D':
               fprintf(stderr,"option D used!\n");
               d_args = "-D"+string(optarg)+" ";
       	       break;
       }
   }
   int fileindex = argc-1;
   string dotstr = basename(argv[fileindex]);
   cout<<"dotstr: "<<dotstr<<"\n";
   int dot_index = dotstr.find_last_of(".");
   string extension = dotstr.substr(dot_index,dotstr.length()-1);
   cout<<"extension: "<<extension<<"\n";
   if(extension!=".oc"){
       exit_status = EXIT_FAILURE;
       fprintf(stderr,"Exiting with status %d\n",exit_status);
       return exit_status;
   }
   dotstr=dotstr.substr(0,dot_index)+".str";
   cout<<"dotstr mark 2: "<<dotstr<<"\n";
   FILE * outfile = fopen(dotstr.c_str(),"w");
   //for (int argi = 1; argi < argc; ++argi){
       string procline;
       pair<string,int> cpp_ret = cpp_line(fileindex,argv,execname,exit_status,d_args);
       if(cpp_ret.second==EXIT_FAILURE){
             fprintf(stderr,"Exiting with status %d\n",exit_status);
             return exit_status;
       }
       istringstream iss(cpp_ret.first);
       string line;
       while(getline(iss,line)){
              string_set::intern (line.c_str());
       }
   //}
   //string_set::intern ("hello");
   string_set::dump (outfile);
   fclose(outfile);
   fprintf(stderr,"Exiting with status %d\n",exit_status);
   return exit_status;
}
