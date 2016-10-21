//cppstrtok.h
#ifndef __CPPSTRTOK_H__
#define __CPPSTRTOK_H__

#include <string>
using namespace std;

#include <errno.h>
#include <libgen.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wait.h>
#include <fstream>

pair<string,int> cpp_line(int i,char** argv,string exec,
    int ext_stat,string darg);
#endif
