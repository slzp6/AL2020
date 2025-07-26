/* code: q11-3.c   (v1.20.00) */
#include <stdio.h>
#include <stdlib.h>

#define MAX 100000000

/* ------------------------------------------ */
void print_array (int v[], int n)
{
  int i;
  printf ("array: ");
  for (i = 0; i < n; i++) {
    printf ("%8d ", v[i]);
  }
  printf ("\n");
}

/* ------------------------------------------ */
void rand_data (int v[], int n)
{
  int i;
  for (i = 0; i < n; i++) {
    v[i] = rand () % (MAX / 10);
  }
}

/* ------------------------------------------ */
int partition (int v[], int lower_bound, int upper_bound)
{
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
void quicksort (int v[], int left, int right)
{
  int p;
  if (left >= right) {
    return;
  }
  p = partition (v, left, right);
  quicksort (v, left, p - 1);
  quicksort (v, p + 1, right);
}

/* ------------------------------------------ */
int main (int argc, char **argv)
{
  int *array;

  array = malloc (sizeof (int) * MAX);
  if (array == NULL) {
    printf ("ERROR: Can not allocate memory\n");
    exit (-1);
  }

  rand_data (array, MAX);
  printf ("array size: %d\n", MAX);
  fflush (stdout);

  print_array (array, 30);

  quicksort (array, 0, MAX - 1);

  print_array (array, 30);

  free (array);
  return 0;
}
