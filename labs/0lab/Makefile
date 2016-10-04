#CMPS 104A
#Fall 2016
#lab0 - Introduction to Unix
#Grace O'Hair-Sherman
#gohairsh

#Makefile

SOURCES = main.cpp month.cpp year.cpp
HEADERS = month.hpp year.hpp
COMPILED = main
SUBMIT = submit cmps104a-wm.f16 lab0

$(COMPILED): $(SOURCES)
	g++ -o $(COMPILED) $(SOURCES)

clean:
	rm -f main

submit: $(SOURCES) $(HEADERS)
	$(SUBMIT) $(SOURCES) $(HEADERS) Makefile
