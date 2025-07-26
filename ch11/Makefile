# -------------------------------------
# Makefile; AL2020 (v1.25)             
# (c)2020 The Open University of Japan 
# -------------------------------------

# CC = cc
# CC = clang
CC = gcc
CFLAGS = -Wall -O2
LIBS = -lm

all: ex11-1 ex11-2 q11-1 q11-2 q11-3 q11-4 

ex11-1: ex11-1.c
	$(CC) ex11-1.c $(CFLAGS) $(LIBS) -o ex11-1

ex11-2: ex11-2.c
	$(CC) ex11-2.c $(CFLAGS) $(LIBS) -o ex11-2

q11-1: q11-1.c
	$(CC) q11-1.c $(CFLAGS) $(LIBS) -o q11-1

q11-2: q11-2.c
	$(CC) q11-2.c $(CFLAGS) $(LIBS) -o q11-2

q11-3: q11-3.c
	$(CC) q11-3.c $(CFLAGS) $(LIBS) -o q11-3

q11-4: q11-4.c
	$(CC) q11-4.c $(CFLAGS) $(LIBS) -o q11-4

clean:
	rm -rf *~  ex11-1 ex11-2 q11-1 q11-2 q11-3 q11-4 

