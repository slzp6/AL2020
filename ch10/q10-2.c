/* code: q10-2.c   (v1.20.00) */
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
int int_compare (const void *va, const void *vb)
{
  int a, b;
  a = *(int *) va;
  b = *(int *) vb;
  if (a < b) {
    return (-1);
  }
  else if (a > b) {
    return (1);
  }
  else {
    return (0);
  }
}

/* ------------------------------------------ */
int main ()
{
  int array[5]
  = { 30, 50, 20, 10, 40 };

  print_array (array, 5);
  qsort (array, 5, sizeof (int), int_compare);
  print_array (array, 5);

  return 0;
}
