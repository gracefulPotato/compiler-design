// $Id: main.cpp,v 1.2 2016-08-18 15:13:48-07 - - $

#include <string>
using namespace std;

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "string_set.h"

int main (int argc, char** argv) {
   for (int i = 1; i < argc; ++i) {         //for each command-line argument,
      const string* str = string_set::intern (argv[i]); //add it to string_set
      printf ("intern (\"%s\") returned %p->\"%s\"\n",  //print debug statement
              argv[i], str, str->c_str());
   }
   string_set::dump (stdout);   //print out string_set contents
   return EXIT_SUCCESS;
}

