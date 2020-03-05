/* code: q11-4.c   (v1.20.00) */
#include <stdio.h>
#include <stdlib.h>

/* ------------------------------------------ */
void print_array (int v[], int n) {
  int i;
  printf ("\n");
  for (i = 0; i < n; i++) {
    printf ("%d ", v[i]);
  }
}

/* ------------------------------------------ */
void merge_sort (int v[], int lb, int ub, int v_temp[]) {
  int i, j, k, c;

  if (lb >= ub) {
    return;
  }
  c = (lb + ub) / 2;

  merge_sort (v, lb, c, v_temp);
  merge_sort (v, c + 1, ub, v_temp);

  for (i = lb; i <= c; i++) {
    v_temp[i] = v[i];
  }
  for (i = c + 1, j = ub; i <= ub; i++, j--) {
    v_temp[i] = v[j];
  }

  i = lb;
  j = ub;

  for (k = lb; k <= ub; k++) {
    if (v_temp[i] <= v_temp[j]) {
      v[k] = v_temp[i++];
    }
    else {
      v[k] = v_temp[j--];
    }
  }
}

/* ------------------------------------------ */
int main () {
  int array[10] = { 8, 4, 3, 2, 1, 0, 7, 9, 5, 6 };
  int array_temp[10];

  print_array (array, 10);
  merge_sort (array, 0, 9, array_temp);
  print_array (array, 10);

  return 0;
}
