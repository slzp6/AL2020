/* code: q11-2.c   (v1.20.00) */
#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 2048

/* ------------------------------------------ */
void print_array (int v[], int n) {
  int i;
  printf ("\n");
  for (i = 0; i < n; i++) {
    printf ("%02d ", v[i]);
  }
}

/* ------------------------------------------ */
int partition (int v[], int lower_bound, int upper_bound) {
  int a, down, up, temp;

  a = v[lower_bound];
  up = upper_bound;
  down = lower_bound;

  while (down < up) {
    while ((v[down] <= a) && (down < upper_bound)) {
      down++;
    }
    while (v[up] > a) {
      up--;
    }
    if (down < up) {
      temp = v[down];
      v[down] = v[up];
      v[up] = temp;
    }
  }
  v[lower_bound] = v[up];
  v[up] = a;
  return up;
}

/* ------------------------------------------ */
void quicksort_stack (int v[], int n) {
  int left, right, i, sptr;
  int stack_lower_bound[STACK_SIZE];
  int stack_upper_bound[STACK_SIZE];

  stack_lower_bound[0] = 0;
  stack_upper_bound[0] = n - 1;
  sptr = 1;

  while (sptr > 0) {
    sptr--;
    left = stack_lower_bound[sptr];
    right = stack_upper_bound[sptr];

    if (left >= right) {
      ;
    }
    else {
      i = partition (v, left, right);

      if ((i - left) < (right - i)) {
	stack_lower_bound[sptr] = i + 1;
	stack_upper_bound[sptr++] = right;
	stack_lower_bound[sptr] = left;
	stack_upper_bound[sptr++] = i - 1;
      }
      else {
	stack_lower_bound[sptr] = left;
	stack_upper_bound[sptr++] = i - 1;
	stack_lower_bound[sptr] = i + 1;
	stack_upper_bound[sptr++] = right;
      }
    }
  }
}


/* ------------------------------------------ */
int main () {
  int array[10]
  = { 80, 40, 30, 20, 10, 00, 70, 90, 50, 60 };

  print_array (array, 10);
  quicksort_stack (array, 10);
  print_array (array, 10);

  return 0;
}
