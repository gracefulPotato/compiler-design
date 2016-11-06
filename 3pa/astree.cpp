
// $Id: astree.cpp,v 1.14 2016-08-18 15:05:42-07 - - $

#include <assert.h>
#include <inttypes.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "astree.h"
#include "string_set.h"
#include "lyutils.h"

astree::astree (int symbol_, const location& lloc_, const char* info) {
   symbol = symbol_;
   lloc = lloc_;
   lexinfo = string_set::intern (info);
   // vector defaults to empty -- no children
}

astree::~astree() {
   while (not children.empty()) {
      astree* child = children.back();
      children.pop_back();
      delete child;
   }
   if (yydebug) {
      fprintf (stderr, "Deleting astree (");
      astree::dump (stderr, this);
      fprintf (stderr, ")\n");
   }
}

astree* astree::adopt (astree* child1, astree* child2) {
   if (child1 != nullptr){
       children.push_back (child1);
       fprintf(stderr,"adding child, children.size()= %lu\n",children.size());
       fprintf(stderr, "yytext=YYEOF: %d",yytext==YYEOF);
       //yyparse_astree->dump_tree(ast,0);
   }else
       fprintf(stderr,"childnullptr");
   if (child2 != nullptr) children.push_back (child2);
   return this;
}

astree* astree::adopt_sym (astree* child, int symbol_) {
   symbol = symbol_;
   return adopt (child);
}


void astree::dump_node (FILE* outfile) {
   fprintf (outfile, "%p->{%s %zd.%zd.%zd \"%s\":",
            this, get_yytname (symbol),
            lloc.filenr, lloc.linenr, lloc.offset,
            lexinfo->c_str());
   //fprintf(stderr,"children.size(): %lu",children.size());
   for (size_t child = 0; child < children.size(); ++child) {
      fprintf (outfile, " %p", children.at(child));
   }
}

void astree::dump_tree (FILE* outfile, int depth) {
   fprintf (outfile, "%*s", depth * 3, "\n");
   dump_node (outfile);
   //fprintf (outfile, "\nchildren.size(): %lu\n",children.size());
   for (astree* child: children){
       //fprintf(stderr,"printing child");
       child->dump_tree (outfile, depth + 1);
   }
   fflush (NULL);
}

void astree::dump (FILE* outfile, astree* tree) {
   if (tree == nullptr) fprintf (outfile, "nullptr");
                   else tree->dump_node (outfile);
}

void astree::print (FILE* outfile,astree* tree,int symbol,int depth) {
   fprintf (outfile, "   %zd  %02zd.%03zd  %3d  %-16s(%s)",
            tree->lloc.filenr, tree->lloc.linenr, tree->lloc.offset,
            symbol, get_yytname (tree->symbol), tree->lexinfo->c_str());
   fprintf (outfile, "%*s\n", depth * 3, "");
   for (astree* child: tree->children) {
      astree::print (outfile, child, depth + 1);
   }
}

void destroy (astree* tree1, astree* tree2) {
   if (tree1 != nullptr) delete tree1;
   if (tree2 != nullptr) delete tree2;
}

void errllocprintf (const location& lloc, const char* format,
                    const char* arg) {
   static char buffer[0x1000];
   assert (sizeof buffer > strlen (format) + strlen (arg));
   snprintf (buffer, sizeof buffer, format, arg);
   errprintf ("%s:%zd.%zd: %s", 
              lexer::filename (lloc.filenr), lloc.linenr, lloc.offset,
              buffer);
}
astree* new_parseroot() { 
   return new astree (TOK_ROOT, {0, 0, 0}, "");
}

