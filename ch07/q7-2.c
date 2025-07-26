/* code: q7-2.c   (v1.25.00) */
#include <stdio.h>
#include <stdlib.h>
#include <search.h>

#define ARRAY_SIZE 10

/* ------------------------------------------- */
int compare (const void *a, const void *b)
{
  int x = *(int *) a;
  int y = *(int *) b;
  if (x < y)
    return -1;
  if (x > y)
    return 1;
  return 0;
}

/* ------------------------------------------- */
void print_array (int array[], int n)
{
  int i;
  for (i = 0; i < n; i++) {
    printf ("%d ", array[i]);
  }
  printf ("\n");
}

/* ------------------------------------------- */
int main ()
{
  int key;
  int *r;
  int array[ARRAY_SIZE] = {
    10, 12, 16, 19, 28, 30, 38, 44, 70, 98
  };				/* ordered array! */

  key = 16;
  print_array (array, ARRAY_SIZE);

  r = (int *) bsearch (&key, array, ARRAY_SIZE, sizeof (int), compare);
  if (r != NULL) {
    printf ("Found: %d\n", *r);
  }
  else {
    printf ("Not found: %d\n", key);
  }
  return 0;
}
