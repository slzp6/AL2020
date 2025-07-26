/* code: ex6-3.c   (v1.20.00) */
#include <stdio.h>

int main ()
{
  int a[10] = { 30, 20, 10, 25, 15 };
  int i, sum, avg;

  sum = 0;
  for (i = 0; i < 5; i++)
    sum += a[i];

  avg = sum / 5;
  printf ("%d\n", avg);

  return 0;
}
