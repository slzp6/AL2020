/* code: q7-1.c   (v1.20.00) */
#include <stdio.h>
#include <stdlib.h>
#include <search.h>

#define ARRAY_SIZE 10

/* ------------------------------------------- */
int compare (int *x, int *y) {
  return (*x - *y);
}

/* ------------------------------------------- */
void print_array (int array[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf ("%d ", array[i]);
  }
  printf ("\n");
}

/* ------------------------------------------- */
int main () {
  int key;
  int *r;
  size_t elements;
  int array[ARRAY_SIZE] = {
    12, 19, 70, 44, 16, 38, 10, 30, 28, 98
  };
  key = 16;
  elements = ARRAY_SIZE;
  print_array (array, ARRAY_SIZE);

  r = (int *) lsearch (&key, &array, &elements, sizeof (int),
		       (int (*)(const void *, const void *)) compare);
  if (r != NULL) {
    printf ("Found: %d\n", key);
  }
  else {
    printf ("Not found: %d\n", key);
  }
  return 0;
}
