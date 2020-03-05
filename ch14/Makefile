# -------------------------------------
# Makefile; AL2020 (v1.00)             
# (c)2020 The Open University of Japan 
# -------------------------------------

# CC = cc
# CC = clang
CC = gcc
CFLAGS = -Wall -Wno-unused-result -O2 
LIBS = -lm

all: ex14-1 ex14-2 q14-1 q14-2 

ex14-1: ex14-1.c
	$(CC) $(CFLAGS) ex14-1.c -o ex14-1 $(LIBS)

ex14-2: ex14-2.c
	$(CC) $(CFLAGS) ex14-2.c -o ex14-2 $(LIBS)

q14-1: q14-1.c
	$(CC) $(CFLAGS) q14-1.c -o q14-1 $(LIBS)

q14-2: q14-2.c
	$(CC) $(CFLAGS) q14-2.c -o q14-2 $(LIBS)

clean:
	rm -rf *~  ex14-1 ex14-2 q14-1 q14-2 

