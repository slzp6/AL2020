# -------------------------------------
# Makefile; AL2020 (v1.25)             
# (c)2020 The Open University of Japan 
# -------------------------------------

# CC = cc
# CC = clang
CC = gcc
CFLAGS = -Wall -Wno-unused-result -O2
LIBS = -lm

all: ex2-1 ex2-2 ex2-3 q2-1 q2-2 q2-3 q2-3a 

ex2-1: ex2-1.c
	$(CC) ex2-1.c $(CFLAGS) $(LIBS) -o ex2-1

ex2-2: ex2-2.c
	$(CC) ex2-2.c $(CFLAGS) $(LIBS) -o ex2-2

ex2-3: ex2-3.c
	$(CC) ex2-3.c $(CFLAGS) $(LIBS) -o ex2-3

q2-1: q2-1.c
	$(CC) q2-1.c $(CFLAGS) $(LIBS) -o q2-1

q2-2: q2-2.c
	$(CC) q2-2.c $(CFLAGS) $(LIBS) -o q2-2

q2-3: q2-3.c
	$(CC) q2-3.c $(CFLAGS) $(LIBS) -o q2-3

q2-3a: q2-3a.c
	$(CC) q2-3a.c $(CFLAGS) $(LIBS) -o q2-3a

clean:
	rm -rf *~  ex2-1 ex2-2 ex2-3 q2-1 q2-2 q2-3 q2-3a 

