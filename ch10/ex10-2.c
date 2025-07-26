/* code: ex10-2.c   (v1.20.00) */
#include <stdio.h>
#include <stdlib.h>

/* ------------------------------------------ */
void print_array (int v[], int n)
{
  int i;
  printf ("array: ");
  for (i = 0; i < n; i++) {
    printf ("%d ", v[i]);
  }
  printf ("\n");
}

/* ------------------------------------------ */
void selection_sort (int v[], int n)
{
  int i, j, t, min_index;
  for (i = 0; i < n - 1; i++) {
    min_index = i;
    for (j = i + 1; j < n; j++) {
      if (v[j] < v[min_index]) {
	min_index = j;
      }
      printf ("i:%d j:%d  ", i, j);
      print_array (v, n);
    }
    t = v[i];
    v[i] = v[min_index];
    v[min_index] = t;
  }
}

/* ------------------------------------------ */
int main ()
{
  int array[5]
  = { 30, 50, 20, 10, 40 };
  print_array (array, 5);
  selection_sort (array, 5);
  print_array (array, 5);
  return 0;
}
