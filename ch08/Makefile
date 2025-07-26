# -------------------------------------
# Makefile; AL2020 (v1.25)             
# (c)2020 The Open University of Japan 
# -------------------------------------

# CC = cc
# CC = clang
CC = gcc
CFLAGS = -Wall -O2
LIBS = -lm

all: ex8-1 ex8-2 ex8-3 q8-1 q8-2 

ex8-1: ex8-1.c
	$(CC) ex8-1.c $(CFLAGS) $(LIBS) -o ex8-1

ex8-2: ex8-2.c
	$(CC) ex8-2.c $(CFLAGS) $(LIBS) -o ex8-2

ex8-3: ex8-3.c
	$(CC) ex8-3.c $(CFLAGS) $(LIBS) -o ex8-3

q8-1: q8-1.c
	$(CC) q8-1.c $(CFLAGS) $(LIBS) -o q8-1

q8-2: q8-2.c
	$(CC) q8-2.c $(CFLAGS) $(LIBS) -o q8-2

clean:
	rm -rf *~  ex8-1 ex8-2 ex8-3 q8-1 q8-2 

