# $Id: Makefile,v 1.13 2016-08-18 13:01:32-07 - - $

GCC        = g++ -g -O0 -Wall -Wextra -std=gnu++14
MKDEP      = g++ -MM -std=gnu++14
VALGRIND   = valgrind --leak-check=full --show-reachable=yes

MKFILE     = Makefile
DEPFILE    = Makefile.dep
CPPSRC     = main.cpp cppstrtok.cpp string_set.cpp auxlib.cpp
SOURCES    = ${CPPSRC} oclib.c
HEADERS    = string_set.h cppstrtok.h auxlib.h oclib.oh
EXECBIN    = oc
SRCFILES   = ${SOURCES} ${MKFILE}
SMALLFILES = ${DEPFILE} foo.oc foo1.oh foo2.oh
CHECKINS   = ${SRCFILES} ${SMALLFILES}
LISTING    = Listing.ps
LSOURCES   = scanner.l
YSOURCES   = parser.y
CLGEN      = yylex.cpp
HYGEN      = yyparse.h
CYGEN      = yyparse.cpp
LREPORT    = yylex.output
YREPORT    = yyparse.output
CGENS      = ${CLGEN} ${CYGEN} ${HYGEN}
ALLCSRC    = ${CPPSRC} ${CGENS}
OBJECTS    = ${ALLCSRC:.cpp=.o}	${CLGEN}
SUBMIT     = submit cmps104a-wm.f16 asg1

all : ${EXECBIN}

${EXECBIN} : ${OBJECTS}
	${GCC} -o${EXECBIN} ${OBJECTS}

%.o : %.cpp
	${GCC} -c $<

ci :
	cid + ${CHECKINS}
	checksource ${CHECKINS}

clean :
	- rm ${OBJECTS} ${CYGEN}

spotless : clean
	- rm ${EXECBIN} ${DEPFILE}

${DEPFILE} :
	${MKDEP} ${SOURCES} >${DEPFILE}

${CLGEN} : ${LSOURCES}
	flex --outfile=${CLGEN} ${LSOURCES} 2>${LREPORT}
	- grep -v '^ ' ${LREPORT}

${CYGEN} ${HYGEN} : ${YSOURCES}
	bison --defines=${HYGEN} --output=${CYGEN} ${YSOURCES}

dep :
	- rm ${DEPFILE}
	${MAKE} --no-print-directory ${DEPFILE}

include Makefile.dep

test : ${EXECBIN}
	${VALGRIND} ${EXECBIN} foo.oc 1>test.out 2>&1

misc.lis : ${DEPFILE} foo.oc foo1.oh foo2.oh
	catnv ${DEPFILE} foo.oc foo1.oh foo2.oh >misc.lis

lis : misc.lis test
	mkpspdf ${LISTING} ${SRCFILES} misc.lis test.out

again :
	${MAKE} spotless dep all test lis

submit : $(SOURCES)
	$(SUBMIT) $(SOURCES) $(HEADERS) README Makefile
