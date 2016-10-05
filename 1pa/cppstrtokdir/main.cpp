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
using namespace std;

#include "string_set.h"
#include "cppstrtok.h"

int main(int argc, char** argv){
   printf("main.cpp\n");
   const char* execname = basename (argv[0]);
   int exit_status = EXIT_SUCCESS;
   string dotstr(basename(argv[1]));
   int dot_index = dotstr.find_last_of(".");
   dotstr = dotstr.substr(0,dot_index);
   ofstream myfile;
   myfile.open(dotstr+".str");
   myfile<<"test";
   for (int argi = 1; argi < argc; ++argi) {
       string procline;
       pair<string,int>(procline,exit_status) = cpp_line(argi,argv,execname,exit_status);
       cout<<procline;
       cout<<"printing procline"<<procline<<"\n";
   }        
   string_set::intern ("hello");
   string_set::dump (stdout);
   return exit_status;
}
