# -------------------------------------
# Makefile; AL2020 (v1.00)             
# (c)2020 The Open University of Japan 
# -------------------------------------

# CC = cc
# CC = clang
CC = gcc
CFLAGS = -Wall -Wno-unused-result -O2 
LIBS = -lm

all: ex11-1 ex11-2 q11-1 q11-2 q11-3 q11-4 

ex11-1: ex11-1.c
	$(CC) $(CFLAGS) ex11-1.c -o ex11-1 $(LIBS)

ex11-2: ex11-2.c
	$(CC) $(CFLAGS) ex11-2.c -o ex11-2 $(LIBS)

q11-1: q11-1.c
	$(CC) $(CFLAGS) q11-1.c -o q11-1 $(LIBS)

q11-2: q11-2.c
	$(CC) $(CFLAGS) q11-2.c -o q11-2 $(LIBS)

q11-3: q11-3.c
	$(CC) $(CFLAGS) q11-3.c -o q11-3 $(LIBS)

q11-4: q11-4.c
	$(CC) $(CFLAGS) q11-4.c -o q11-4 $(LIBS)

clean:
	rm -rf *~  ex11-1 ex11-2 q11-1 q11-2 q11-3 q11-4 

