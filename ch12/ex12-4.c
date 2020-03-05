/* code: ex12-4.c   (v1.20.00) */
#include <stdio.h>
#include <stdlib.h>

/* ------------------------------------------- */
int main () {
  int **array;
  int i, j, rows, columns;

  rows = 768;
  columns = 1024;

  array = malloc (rows * sizeof (int *));
  for (i = 0; i < rows; i++) {
    array[i] = malloc (columns * sizeof (int));
  }

  for (i = 0; i < rows; i++) {
    for (j = 0; j < columns; j++) {
      array[i][j] = rand () % 10;
    }
  }

  for (i = 0; i < rows; i++) {
    for (j = 0; j < columns; j++) {
      printf ("%d ", array[i][j]);
    }
    printf ("\n");
  }

  for (i = 0; i < rows; i++) {
    free (array[i]);
  }
  free (array);

  return 0;
}
