/* code: q11-1.c   (v1.20.00) */
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
void quicksort (int v[], int left, int right, int level)
{
  int p;
  int i;
  if (left >= right) {
    return;
  }
  level++;
  p = partition (v, left, right);
  quicksort (v, left, p - 1, level);
  quicksort (v, p + 1, right, level);
  for (i = 0; i < level; i++) {
    printf ("*");
  }
  printf ("[pivot:%d left:%d right:%d]\n", p, left, right);
}

/* ------------------------------------------ */
int main ()
{
  int array[10]
  = { 30, 40, 80, 20, 10, 00, 70, 90, 50, 60 };

  print_array (array, 10);
  quicksort (array, 0, 9, 0);
  print_array (array, 10);

  return 0;
}
