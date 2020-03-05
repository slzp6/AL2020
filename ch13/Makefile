# -------------------------------------
# Makefile; AL2020 (v1.00)             
# (c)2020 The Open University of Japan 
# -------------------------------------

# CC = cc
# CC = clang
CC = gcc
CFLAGS = -Wall -Wno-unused-result -O2 
LIBS = -lm

all: ex13-1 ex13-2 ex13-3 ex13-4 q13-1 q13-2 q13-3 q13-4 

ex13-1: ex13-1.c
	$(CC) $(CFLAGS) ex13-1.c -o ex13-1 $(LIBS)

ex13-2: ex13-2.c
	$(CC) $(CFLAGS) ex13-2.c -o ex13-2 $(LIBS)

ex13-3: ex13-3.c
	$(CC) $(CFLAGS) ex13-3.c -o ex13-3 $(LIBS)

ex13-4: ex13-4.c
	$(CC) $(CFLAGS) ex13-4.c -o ex13-4 $(LIBS)

q13-1: q13-1.c
	$(CC) $(CFLAGS) q13-1.c -o q13-1 $(LIBS)

q13-2: q13-2.c
	$(CC) $(CFLAGS) q13-2.c -o q13-2 $(LIBS)

q13-3: q13-3.c
	$(CC) $(CFLAGS) q13-3.c -o q13-3 $(LIBS)

q13-4: q13-4.c
	$(CC) $(CFLAGS) q13-4.c -o q13-4 $(LIBS)

clean:
	rm -rf *~  ex13-1 ex13-2 ex13-3 ex13-4 q13-1 q13-2 q13-3 q13-4 

