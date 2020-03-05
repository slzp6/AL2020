/* code: ex6-2.c   (v1.20.00) */
#include <stdio.h>

int main () {
  int a[10];
  int i, sum, avg;

  a[0] = 30;
  a[1] = 20;
  a[2] = 10;
  a[3] = 25;
  a[4] = 15;
  sum = 0;
  for (i = 0; i < 5; i++)
    sum += a[i];

  avg = sum / 5;
  printf ("%d\n", avg);

  return 0;
}
