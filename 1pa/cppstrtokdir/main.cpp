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

int main(int argc, char** argv){
   string execname = basename (argv[0]);
   int exit_status = EXIT_SUCCESS;
   string dotstr = basename(argv[1]);
   int dot_index = dotstr.find_last_of(".");
   string extension = dotstr.substr(dot_index,dotstr.length()-1);
   if(extension!=".oc"){
       exit_status = EXIT_FAILURE;
       fprintf(stderr,"Exiting with status %d\n",exit_status);
       return exit_status;
   }
   FILE * outfile = fopen(dotstr.c_str(),"w");
   for (int argi = 1; argi < argc; ++argi){
       string procline;
       pair<string,int> cpp_ret = cpp_line(argi,argv,execname,exit_status);
   
       istringstream iss(cpp_ret.first);
       string line;
       while(getline(iss,line)){
              string_set::intern (line.c_str());
       }
   }
   string_set::intern ("hello");
   string_set::dump (outfile);
   fclose(outfile);
   fprintf(stderr,"Exiting with status %d\n",exit_status);
   return exit_status;
}
