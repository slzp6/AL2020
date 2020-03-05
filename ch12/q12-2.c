/* code: q12-2.c   (v1.20.00) */
#include <stdio.h>
#include <stdlib.h>

/* ------------------------------------------- */
int **m2d_allocate (int rows, int columns) {
  int **array;
  int i;
  array = malloc (rows * sizeof (int *));
  for (i = 0; i < rows; i++) {
    array[i] = malloc (columns * sizeof (int));
  }
  return array;
}

/* ------------------------------------------- */
void m2d_deallocate (int **array, int rows) {
  int i;
  for (i = 0; i < rows; i++) {
    free (array[i]);
  }
  free (array);
}

/* ------------------------------------------- */
int main () {
  int **array;
  int i, j, rows, columns;

  rows = 768;
  columns = 1024;

  array = m2d_allocate (rows, columns);

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

  m2d_deallocate (array, rows);

  return 0;
}
