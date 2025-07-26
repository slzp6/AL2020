/* code: ex12-3.c   (v1.20.00) */
#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 3000000

int main ()
{
  int *array;
  int i;

  array = malloc (sizeof (int) * ARRAY_SIZE);

  if (NULL == array) {
    fprintf (stderr, "Error: malloc() \n");
    exit (-1);
  }
  else {
    for (i = 0; i < ARRAY_SIZE; i++) {
      array[i] = 100;
    }
    for (i = 0; i < 10; i++) {
      printf ("%d ", array[i]);
    }
    free (array);
  }

  return 0;
}
