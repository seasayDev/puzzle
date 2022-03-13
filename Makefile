CC = gcc 
OPTIONS = -Wall -c 
OFLAGS = -o 
EXEC = motcache



compile: motcache.o tableau.o util.o grille.o

motcahe.o: motcache.c tableau.h
	$(CC) $(OPTIONS) motcache.c 

tableau.o:  tableau.c util.h 
	$(CC) $(OPTIONS) tableau.c

util.0: util.h util.c
	$(CC) $(OPTIONS) util.c

grille.o: grille.c grille.h util.h
	$(CC) $(OPTIONS)  grille.c 
	


.PHONY: clean 

clean: 
	rm -rf *.o  $(EXEC)


