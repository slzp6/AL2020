/* code: ex8-3.c   (v1.20.00) */
#include <stdio.h>
#include <stdlib.h>
#define WIDTH  40
#define HEIGHT 20

/* ------------------------------------------- */
void cell_evolve (int array[HEIGHT][WIDTH]) {
  int array_new[HEIGHT][WIDTH];
  int x, y, n, x_width, y_height;

  for (y = 0; y < HEIGHT; y++) {
    for (x = 0; x < WIDTH; x++) {
      n = 0;
      for (y_height = y - 1; y_height <= y + 1; y_height++) {
	for (x_width = x - 1; x_width <= x + 1; x_width++) {
	  if (array[(y_height + HEIGHT) % HEIGHT][(x_width + WIDTH) % WIDTH]) {
	    n++;
	  }
	}
      }
      if (array[y][x]) {
	n--;
      }
      array_new[y][x] = (n == 3 || (n == 2 && array[y][x]));
    }
  }

  for (y = 0; y < HEIGHT; y++) {
    for (x = 0; x < WIDTH; x++) {
      array[y][x] = array_new[y][x];
    }
  }
}

/* ------------------------------------------- */
void cell_first_generation (int array[HEIGHT][WIDTH]) {
  int x, y, r;
  for (x = 0; x < WIDTH; x++) {
    for (y = 0; y < HEIGHT; y++) {
      r = RAND_MAX / 8;
      if (rand () < r) {
	array[y][x] = 1;
      }
      else {
	array[y][x] = 0;
      }
    }
  }
}

/* ------------------------------------------- */
void cell_print (int array[HEIGHT][WIDTH], int generation) {
  int x, y;
  printf ("[Generation: %05d]\n", generation);
  for (y = 0; y < HEIGHT; y++) {
    for (x = 0; x < WIDTH; x++) {
      if (array[y][x] == 1) {
	printf ("*");
      }
      else {
	printf (".");
      }
    }
    printf ("\n");
  }
  printf ("\n");
  fflush (stdout);
}

/* ------------------------------------------- */
int main () {
  int i;
  int array[HEIGHT][WIDTH];
  cell_first_generation (array);
  i = 0;
  while (i < 100) {
    cell_print (array, i);
    cell_evolve (array);
    i++;
  }
  return 0;
}
