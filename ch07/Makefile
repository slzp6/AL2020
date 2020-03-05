# -------------------------------------
# Makefile; AL2020 (v1.00)             
# (c)2020 The Open University of Japan 
# -------------------------------------

# CC = cc
# CC = clang
CC = gcc
CFLAGS = -Wall -Wno-unused-result -O2 
LIBS = -lm

all: ex7-1 ex7-2 q7-1 q7-2 q7-3 

ex7-1: ex7-1.c
	$(CC) $(CFLAGS) ex7-1.c -o ex7-1 $(LIBS)

ex7-2: ex7-2.c
	$(CC) $(CFLAGS) ex7-2.c -o ex7-2 $(LIBS)

q7-1: q7-1.c
	$(CC) $(CFLAGS) q7-1.c -o q7-1 $(LIBS)

q7-2: q7-2.c
	$(CC) $(CFLAGS) q7-2.c -o q7-2 $(LIBS)

q7-3: q7-3.c
	$(CC) $(CFLAGS) q7-3.c -o q7-3 $(LIBS)

clean:
	rm -rf *~  ex7-1 ex7-2 q7-1 q7-2 q7-3 

