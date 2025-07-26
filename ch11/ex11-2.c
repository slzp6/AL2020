/* code: ex11-2.c   (v1.20.00) */
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

/* ------------------------------------------ */
void print_array (int v[], int n)
{
  int i;
  printf ("array: ");
  for (i = 0; i < n; i++) {
    printf ("%4d ", v[i]);
  }
  printf ("\n");
}

/* ------------------------------------------ */
void radix_sort (int a[], int n)
{
  int i, max, exp;
  int temp[MAX];
  int bucket[10];

  max = 0;
  exp = 1;
  for (i = 0; i < n; i++) {
    if (a[i] > max) {
      max = a[i];
    }
  }
  while (max / exp > 0) {
    for (i = 0; i < 10; i++) {
      bucket[i] = 0;
    }
    for (i = 0; i < n; i++) {
      bucket[a[i] / exp % 10]++;
    }
    for (i = 1; i < 10; i++) {
      bucket[i] += bucket[i - 1];
    }
    for (i = n - 1; i >= 0; i--) {
      temp[--bucket[a[i] / exp % 10]] = a[i];
    }
    for (i = 0; i < n; i++) {
      a[i] = temp[i];
    }
    exp *= 10;
    print_array (a, n);
  }
}

/* ------------------------------------------ */
int main ()
{
  int array[MAX]
  = { 12, 19, 10, 28, 30, 01, 502, 16, 34, 177 };

  print_array (array, 10);
  radix_sort (array, 10);
  print_array (array, 10);

  return 0;
}
