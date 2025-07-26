# -------------------------------------
# Makefile; AL2020 (v1.25)             
# (c)2020 The Open University of Japan 
# -------------------------------------

# CC = cc
# CC = clang
CC = gcc
CFLAGS = -Wall -Wno-unused-result -O2
LIBS = -lm

all: ex9-1 ex9-2 ex9-3 q9-1 q9-2 q9-3 q9-4 

ex9-1: ex9-1.c
	$(CC) ex9-1.c $(CFLAGS) $(LIBS) -o ex9-1

ex9-2: ex9-2.c
	$(CC) ex9-2.c $(CFLAGS) $(LIBS) -o ex9-2

ex9-3: ex9-3.c
	$(CC) ex9-3.c $(CFLAGS) $(LIBS) -o ex9-3

q9-1: q9-1.c
	$(CC) q9-1.c $(CFLAGS) $(LIBS) -o q9-1

q9-2: q9-2.c
	$(CC) q9-2.c $(CFLAGS) $(LIBS) -o q9-2

q9-3: q9-3.c
	$(CC) q9-3.c $(CFLAGS) $(LIBS) -o q9-3

q9-4: q9-4.c
	$(CC) q9-4.c $(CFLAGS) $(LIBS) -o q9-4

clean:
	rm -rf *~  ex9-1 ex9-2 ex9-3 q9-1 q9-2 q9-3 q9-4 

