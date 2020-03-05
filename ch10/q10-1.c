/* code: q10-1.c   (v1.20.00) */
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
void bubble_sort (int v[], int n) {
  int i, j, t, flag;

  flag = 1;
  for (i = 0; (i < n - 1) && (flag == 1); i++) {
    flag = 0;
    for (j = n - 1; j > i; j--) {
      if (v[j - 1] > v[j]) {
	t = v[j];
	v[j] = v[j - 1];
	v[j - 1] = t;
	flag = 1;
      }
      printf ("i:%d j:%d  ", i, j);
      print_array (v, n);
    }
  }
}

/* ------------------------------------------ */
int main () {
/*  int array[5] 
     = { 30, 50, 20, 10, 40 }; */
/*  int array[5] 
     = { 50, 40, 30, 20, 10 }; */

  int array[5]
  = { 10, 20, 30, 40, 50 };

  print_array (array, 5);
  bubble_sort (array, 5);
  print_array (array, 5);

  return 0;
}
