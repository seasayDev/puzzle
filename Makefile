CC = gcc 
OPTIONS = -Wall -c  
OFLAGS = -o
EXEC = motcache 

all: link


compile: motcache.o tableau.o util.o grille.o  

motcahe.o: motcache.c tableau.h
	$(CC) $(OPTIONS) motcache.c 

tableau.o:  tableau.c util.h 
	$(CC) $(OPTIONS) tableau.c

util.0: util.h util.c
	$(CC) $(OPTIONS) util.c

grille.o: grille.c grille.h util.h
	$(CC) $(OPTIONS)  grille.c 
 

link: compile 
	$(CC) $(OFLAGS) $(EXEC) motcache.o grille.o util.o tableau.o

.PHONY: clean 

test: link
	bats check.bats

clean: 
	rm -rf *.o  $(EXEC)

