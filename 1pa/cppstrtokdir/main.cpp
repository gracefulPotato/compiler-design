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
using namespace std;

#include "string_set.h"
#include "cppstrtok.h"

int main(int argc, char** argv){
   printf("main.cpp\n");
   string execname = basename (argv[0]);
   int exit_status = EXIT_SUCCESS;
   string dotstr = basename(argv[1]);
   int dot_index = dotstr.find_last_of(".");
   dotstr = dotstr.substr(0,dot_index)+".str";
   FILE * outfile = fopen(dotstr.c_str(),"w");
   for (int argi = 1; argi < argc; ++argi){
       string procline;
       pair<string,int> cpp_ret = cpp_line(argi,argv,execname,exit_status);
       cout<<cpp_ret.first;
       cout<<"printing procline"<<procline<<"\n";
   
       istringstream input(cpp_ret.first);
       char* line=0;
       //for(;;){
           //if(input.getline(line,1024)){
              //string_set::intern (line);
           //}else break;
           //if(!line) break;
           //else{
              //string_set::intern (line);
           //}
       //}
   }
   string_set::intern ("hello");
   string_set::dump (outfile);
   fclose(outfile);
   return exit_status;
}
