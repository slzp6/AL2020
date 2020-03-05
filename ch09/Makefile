# -------------------------------------
# Makefile; AL2020 (v1.00)             
# (c)2020 The Open University of Japan 
# -------------------------------------

# CC = cc
# CC = clang
CC = gcc
CFLAGS = -Wall -Wno-unused-result -O2 
LIBS = -lm

all: ex9-1 ex9-2 ex9-3 q9-1 q9-2 q9-3 q9-4 

ex9-1: ex9-1.c
	$(CC) $(CFLAGS) ex9-1.c -o ex9-1 $(LIBS)

ex9-2: ex9-2.c
	$(CC) $(CFLAGS) ex9-2.c -o ex9-2 $(LIBS)

ex9-3: ex9-3.c
	$(CC) $(CFLAGS) ex9-3.c -o ex9-3 $(LIBS)

q9-1: q9-1.c
	$(CC) $(CFLAGS) q9-1.c -o q9-1 $(LIBS)

q9-2: q9-2.c
	$(CC) $(CFLAGS) q9-2.c -o q9-2 $(LIBS)

q9-3: q9-3.c
	$(CC) $(CFLAGS) q9-3.c -o q9-3 $(LIBS)

q9-4: q9-4.c
	$(CC) $(CFLAGS) q9-4.c -o q9-4 $(LIBS)

clean:
	rm -rf *~  ex9-1 ex9-2 ex9-3 q9-1 q9-2 q9-3 q9-4 

