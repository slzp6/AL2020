/* code: q12-1.c   (v1.20.00) */
#include <stdio.h>
#include <stdlib.h>

/* ------------------------------------------- */
int main () {
  int ***array;
  int i, j, k;
  int x, y, z;

  x = 10;
  y = 20;
  z = 30;

  array = malloc (x * sizeof (int **));
  for (i = 0; i < x; i++) {
    array[i] = malloc (y * sizeof (int *));
    for (j = 0; j < y; j++) {
      array[i][j] = malloc (z * sizeof (int));
    }
  }

  for (i = 0; i < x; i++) {
    for (j = 0; j < y; j++) {
      for (k = 0; k < z; k++) {
	array[i][j][k] = rand () % 10;
      }
    }
  }

  for (i = 0; i < x; i++) {
    for (j = 0; j < y; j++) {
      for (k = 0; k < z; k++) {
	printf ("%d ", array[i][j][k]);
      }
    }
  }

  for (i = 0; i < x; i++) {
    for (j = 0; j < y; j++) {
      free (array[i][j]);
    }
    free (array[i]);
  }
  free (array);

  return 0;
}
