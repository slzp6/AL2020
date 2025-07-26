# -------------------------------------
# Makefile; AL2020 (v1.25)             
# (c)2020 The Open University of Japan 
# -------------------------------------

# CC = cc
# CC = clang
CC = gcc
CFLAGS = -Wall -O2
LIBS = -lm

all: ex14-1 ex14-2 q14-1 q14-2 

ex14-1: ex14-1.c
	$(CC) ex14-1.c $(CFLAGS) $(LIBS) -o ex14-1

ex14-2: ex14-2.c
	$(CC) ex14-2.c $(CFLAGS) $(LIBS) -o ex14-2

q14-1: q14-1.c
	$(CC) q14-1.c $(CFLAGS) $(LIBS) -o q14-1

q14-2: q14-2.c
	$(CC) q14-2.c $(CFLAGS) $(LIBS) -o q14-2

clean:
	rm -rf *~  ex14-1 ex14-2 q14-1 q14-2 

