/* code: q7-1.c   (v1.25.00) */
#include <stdio.h>
#include <stdlib.h>
#include <search.h>

#define ARRAY_SIZE 5
#define EXTRA_ROOM 1

/* ------------------------------------------- */
int compare (const void *x, const void *y)
{
  int a = *(const int *) x;
  int b = *(const int *) y;
  return (a > b) - (a < b);
}

/* ------------------------------------------- */
void print_array (int arr[], size_t n)
{
  for (size_t i = 0; i < n; i++) {
    printf ("%d ", arr[i]);
  }
  printf ("\n");
}

/* ------------------------------------------- */
int main ()
{
  int key = 25;
  size_t elements = ARRAY_SIZE;
  int array[ARRAY_SIZE + EXTRA_ROOM] = { 10, 20, 30, 40, 50 };

  printf ("Initial array: ");
  print_array (array, elements);
  int *found = lsearch (&key, array, &elements, sizeof (int), compare);
  if (!found) {
    printf ("Search error\n");
    return EXIT_FAILURE;
  }
  printf ("\nResult:\n");
  if (elements == ARRAY_SIZE) {
    printf ("Key %d was already in the array.\n", key);
  }
  else {
    printf ("Key %d was added to the array.\n", key);
  }
  print_array (array, elements);
  return EXIT_SUCCESS;
}
