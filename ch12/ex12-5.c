/* code: ex12-5.c   (v1.20.00) */
#include <stdio.h>
#include <stdlib.h>

/* ------------------------------------------- */
int main ()
{
  int **array;
  int i, j, rows, columns;

  rows = 768;
  columns = 1024;

  array = malloc (rows * sizeof (int *));
  array[0] = malloc (rows * columns * sizeof (int));
  for (i = 1; i < rows; i++) {
    array[i] = array[0] + i * columns;
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

  free (array[0]);
  free (array);

  return 0;
}
