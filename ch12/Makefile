# -------------------------------------
# Makefile; AL2020 (v1.00)             
# (c)2020 The Open University of Japan 
# -------------------------------------

# CC = cc
# CC = clang
CC = gcc
CFLAGS = -Wall -Wno-unused-result -O2 
LIBS = -lm

all: ex12-1 ex12-2 ex12-3 ex12-4 ex12-5 q12-1 q12-2 

ex12-1: ex12-1.c
	$(CC) $(CFLAGS) ex12-1.c -o ex12-1 $(LIBS)

ex12-2: ex12-2.c
	$(CC) $(CFLAGS) ex12-2.c -o ex12-2 $(LIBS)

ex12-3: ex12-3.c
	$(CC) $(CFLAGS) ex12-3.c -o ex12-3 $(LIBS)

ex12-4: ex12-4.c
	$(CC) $(CFLAGS) ex12-4.c -o ex12-4 $(LIBS)

ex12-5: ex12-5.c
	$(CC) $(CFLAGS) ex12-5.c -o ex12-5 $(LIBS)

q12-1: q12-1.c
	$(CC) $(CFLAGS) q12-1.c -o q12-1 $(LIBS)

q12-2: q12-2.c
	$(CC) $(CFLAGS) q12-2.c -o q12-2 $(LIBS)

clean:
	rm -rf *~  ex12-1 ex12-2 ex12-3 ex12-4 ex12-5 q12-1 q12-2 

