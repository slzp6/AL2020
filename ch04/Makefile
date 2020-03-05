# -------------------------------------
# Makefile; AL2020 (v1.00)             
# (c)2020 The Open University of Japan 
# -------------------------------------

# CC = cc
# CC = clang
CC = gcc
CFLAGS = -Wall -Wno-unused-result -O2 
LIBS = -lm

all: ex4-1 ex4-2 

ex4-1: ex4-1.c
	$(CC) $(CFLAGS) ex4-1.c -o ex4-1 $(LIBS)

ex4-2: ex4-2.c
	$(CC) $(CFLAGS) ex4-2.c -o ex4-2 $(LIBS)

clean:
	rm -rf *~  ex4-1 ex4-2 

