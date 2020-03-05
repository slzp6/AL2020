# -------------------------------------
# Makefile; AL2020 (v1.00)             
# (c)2020 The Open University of Japan 
# -------------------------------------

# CC = cc
# CC = clang
CC = gcc
CFLAGS = -Wall -Wno-unused-result -O2 
LIBS = -lm

all: ex10-1 ex10-2 ex10-3 ex10-4 ex10-5 q10-1 q10-2 q10-3 

ex10-1: ex10-1.c
	$(CC) $(CFLAGS) ex10-1.c -o ex10-1 $(LIBS)

ex10-2: ex10-2.c
	$(CC) $(CFLAGS) ex10-2.c -o ex10-2 $(LIBS)

ex10-3: ex10-3.c
	$(CC) $(CFLAGS) ex10-3.c -o ex10-3 $(LIBS)

ex10-4: ex10-4.c
	$(CC) $(CFLAGS) ex10-4.c -o ex10-4 $(LIBS)

ex10-5: ex10-5.c
	$(CC) $(CFLAGS) ex10-5.c -o ex10-5 $(LIBS)

q10-1: q10-1.c
	$(CC) $(CFLAGS) q10-1.c -o q10-1 $(LIBS)

q10-2: q10-2.c
	$(CC) $(CFLAGS) q10-2.c -o q10-2 $(LIBS)

q10-3: q10-3.c
	$(CC) $(CFLAGS) q10-3.c -o q10-3 $(LIBS)

clean:
	rm -rf *~  ex10-1 ex10-2 ex10-3 ex10-4 ex10-5 q10-1 q10-2 q10-3 

