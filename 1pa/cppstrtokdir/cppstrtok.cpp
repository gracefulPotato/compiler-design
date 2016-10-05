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
      //printf("%s:line %d: [%s]\n", filename, linenr, buffer);
      // http://gcc.gnu.org/onlinedocs/cpp/Preprocessor-Output.html
      int sscanf_rc = sscanf (buffer, "# %d \"%[^\"]\"",
                              &linenr, inputname);
      //if line has pattern linenr "
      if (sscanf_rc == 2) {
         string inputstr(inputname);
         retstr=retstr+"DIRECTIVE: line "+to_string(linenr)+" file \""+inputstr+"\"\n";
         //printf ("DIRECTIVE: line %d file \"%s\"\n", linenr, inputname);
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
         //printf ("token %d.%d: [%s]\n",linenr, tokenct, token);
      }
      ++linenr;

   }
   return retstr;
}

pair<string,int> cpp_line(int argi, char** argv,string execname,int exit_status){
    printf("in cpp_line()\n");
    char* filename = argv[argi];
    string command = CPP + " " + filename;
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
   cout<<"procline (in cppstrtok: )"<<procline;
   pair<string,int> rettomain = pair<string,int>(procline, exit_status);
   return rettomain;
}

//int main (int argc, char** argv) {
//   const char* execname = basename (argv[0]);
//   int exit_status = EXIT_SUCCESS;
//   string dotstr(basename(argv[1]));
//   int dot_index = dotstr.find_last_of(".");
//   dotstr = dotstr.substr(0,dot_index);
//   ofstream myfile;
//   myfile.open(dotstr+".str");
//   //myfile<<"test";
//   for (int argi = 1; argi < argc; ++argi) {
//      char* filename = argv[argi];
//      string command = CPP + " " + filename;
//      myfile<<"command=\""+command+"\"\n";//, command.c_str());
//      FILE* pipe = popen (command.c_str(), "r");
//      if (pipe == NULL) {
//         exit_status = EXIT_FAILURE;
//         fprintf (stderr, "%s: %s: %s\n",
//                  execname, command.c_str(), strerror (errno));
//      }else {
//         cpplines (pipe, myfile, filename);
//         int pclose_rc = pclose (pipe);
//         eprint_status (command.c_str(), pclose_rc);
//         if (pclose_rc != 0) exit_status = EXIT_FAILURE;
//      }
//   }
//   //string_set::intern ("test");
//   //string_set::dump (stdout);
//   return exit_status;
//}

//int main (int argc, char** argv) {
//   for (int i = 1; i < argc; ++i) {         //for each command-line argument,
//      const string* str = string_set::intern (argv[i]); //add it to string_set
//      printf ("intern (\"%s\") returned %p->\"%s\"\n",  //print debug statement
//              argv[i], str, str->c_str());
//   }
//   string_set::dump (stdout);   //print out string_set contents
//   return EXIT_SUCCESS;
//}

