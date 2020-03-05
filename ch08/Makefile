# -------------------------------------
# Makefile; AL2020 (v1.00)             
# (c)2020 The Open University of Japan 
# -------------------------------------

# CC = cc
# CC = clang
CC = gcc
CFLAGS = -Wall -Wno-unused-result -O2 
LIBS = -lm

all: ex8-1 ex8-2 ex8-3 q8-1 q8-2 

ex8-1: ex8-1.c
	$(CC) $(CFLAGS) ex8-1.c -o ex8-1 $(LIBS)

ex8-2: ex8-2.c
	$(CC) $(CFLAGS) ex8-2.c -o ex8-2 $(LIBS)

ex8-3: ex8-3.c
	$(CC) $(CFLAGS) ex8-3.c -o ex8-3 $(LIBS)

q8-1: q8-1.c
	$(CC) $(CFLAGS) q8-1.c -o q8-1 $(LIBS)

q8-2: q8-2.c
	$(CC) $(CFLAGS) q8-2.c -o q8-2 $(LIBS)

clean:
	rm -rf *~  ex8-1 ex8-2 ex8-3 q8-1 q8-2 

