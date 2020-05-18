/* code: q7-1.c   (v1.20.00) */
#include <stdio.h>
#include <stdlib.h>
#include <search.h>

#define ARRAY_SIZE 10
#define NEW_ITEMS  1

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
  size_t elements, elements_t;
  int array[ARRAY_SIZE + NEW_ITEMS] = {
    12, 19, 70, 44, 16, 38, 10, 30, 28, 98
  };

  key = 17;

  elements_t = elements = ARRAY_SIZE;
  print_array (array, ARRAY_SIZE);

  printf ("elements: %zu\n", elements);

  r = (int *) lsearch (&key, &array, &elements, sizeof (int),
		       (int (*)(const void *, const void *)) compare);

  if (r == NULL) {
    printf ("ERROR: lsearch()");
    exit (-1);
  }

  printf ("elements: %zu\n", elements);

  if (elements == elements_t) {
    printf ("Found : %d\n", key);
  }
  else {
    printf ("Not found %d\n", key);
    printf ("The item added at the end of the array.\n");
    print_array (array, ARRAY_SIZE + NEW_ITEMS);
  }

  return 0;
}

/* 
   The lsearch and lfind functions return  
   a pointer to the first element found. 
   If no element was found, lsearch returns 
   a pointer to the newly added element, 
   whereas lfind returns NULL. 
*/

/* ------------------------------------------- 

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

  r = (int *) lfind (&key, &array, &elements, sizeof (int),
		       (int (*)(const void *, const void *)) compare);
  if ( r != NULL ) {
    printf ("Found: %d\n", key);
  }
  else {
    printf ("Not found: %d\n", key);
  }
  return 0;
}

  ------------------------------------------- */
