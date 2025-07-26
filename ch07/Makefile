# -------------------------------------
# Makefile; AL2020 (v1.25)             
# (c)2020 The Open University of Japan 
# -------------------------------------

# CC = cc
# CC = clang
CC = gcc
CFLAGS = -Wall -O2
LIBS = -lm

all: ex7-1 ex7-2 q7-1 q7-2 q7-3 

ex7-1: ex7-1.c
	$(CC) ex7-1.c $(CFLAGS) $(LIBS) -o ex7-1

ex7-2: ex7-2.c
	$(CC) ex7-2.c $(CFLAGS) $(LIBS) -o ex7-2

q7-1: q7-1.c
	$(CC) q7-1.c $(CFLAGS) $(LIBS) -o q7-1

q7-2: q7-2.c
	$(CC) q7-2.c $(CFLAGS) $(LIBS) -o q7-2

q7-3: q7-3.c
	$(CC) q7-3.c $(CFLAGS) $(LIBS) -o q7-3

clean:
	rm -rf *~  ex7-1 ex7-2 q7-1 q7-2 q7-3 

