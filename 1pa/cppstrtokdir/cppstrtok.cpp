// $Id: cppstrtok.cpp,v 1.6 2016-08-18 13:00:16-07 - - $

// Use cpp to scan a file and print line numbers.
// Print out each input line read in, then strtok it for
// tokens.

#include <string>
using namespace std;

#include <errno.h>
#include <libgen.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wait.h>
#include <fstream>
#include <iostream>

#include "cppstrtok.h"
#include "string_set.h"
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

// Print the status returned from a subprocess.
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
string cpplines (FILE* pipe, char* filename,string retstr) {//ofstream& myfile, char* filename) {
   int linenr = 1;
   char inputname[LINESIZE];
   strcpy (inputname, filename);
   for (;;) {   //infinite loop
      char buffer[LINESIZE];  //array w/ 1024 entries
      char* fgets_rc = fgets (buffer, LINESIZE, pipe);
      if (fgets_rc == NULL) break;
      chomp (buffer, '\n');
      string bufferstr(buffer);
      string filestr(filename);
      retstr = retstr+filestr+":line "+to_string(linenr)+": ["+bufferstr+"]\n";
      // http://gcc.gnu.org/onlinedocs/cpp/Preprocessor-Output.html
      int sscanf_rc = sscanf (buffer, "# %d \"%[^\"]\"",
                              &linenr, inputname);
      if (sscanf_rc == 2) {
         string inputstr(inputname);
         retstr=retstr+"DIRECTIVE: line "+to_string(linenr)+" file \""+inputstr+"\"\n";
         continue;
      }
      char* savepos = NULL;
      char* bufptr = buffer;
      for (int tokenct = 1;; ++tokenct) {
         char* token = strtok_r (bufptr, " \t\n", &savepos);
         bufptr = NULL;
         if (token == NULL) break;
         string tokenstr(token);
         retstr=retstr+"token "+to_string(linenr)+"."+to_string(tokenct)+": ["+tokenstr+"]\n";
      }
      ++linenr;

   }
   return retstr;
}

pair<string,int> cpp_line(int argi, char** argv,string execname,int exit_status,string d_args){
    char* filename = argv[argi];
    string command = CPP + " " + d_args + filename;
    cout<<"command: "<<command<<"\n";
    string procline="command=\""+command+"\"\n";//, command.c_str());
    FILE* pipe = popen (command.c_str(), "r");
    if (pipe == NULL) {
         exit_status = EXIT_FAILURE;
         fprintf (stderr, "%s: %s: %s\n",
                  execname.c_str(), command.c_str(), strerror (errno));
	}else {
         procline = procline + cpplines (pipe, filename,procline);//myfile, filename);
         int pclose_rc = pclose (pipe);
         eprint_status (command.c_str(), pclose_rc);
         if (pclose_rc != 0) exit_status = EXIT_FAILURE;
	}
   pair<string,int> rettomain = pair<string,int>(procline, exit_status);
   return rettomain;
}
