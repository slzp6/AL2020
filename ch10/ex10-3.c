/* code: ex10-3.c   (v1.20.00) */
#include <stdio.h>
#include <stdlib.h>

/* ------------------------------------------ */
void print_array (int v[], int n) {
  int i;
  printf ("array: ");
  for (i = 0; i < n; i++) {
    printf ("%d ", v[i]);
  }
  printf ("\n");
}

/* ------------------------------------------ */
void insertion_sort (int v[], int n) {
  int i, j, t;
  for (i = 1; i < n; i++) {
    j = i;
    while ((j >= 1) && (v[j - 1] > v[j])) {
      t = v[j];
      v[j] = v[j - 1];
      v[j - 1] = t;
      j--;
      printf ("i:%d j:%d  ", i, j);
      print_array (v, n);
    }
  }
}

/* ------------------------------------------ */
int main () {
  int array[5]
  = { 30, 50, 20, 10, 40 };
  print_array (array, 5);
  insertion_sort (array, 5);
  print_array (array, 5);
  return 0;
}
