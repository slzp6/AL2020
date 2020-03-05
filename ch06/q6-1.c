/* code: q6-1.c   (v1.20.00) */
#include <stdio.h>

int main () {
  float a[5];
  int i;
  float sum, avg;

  a[0] = 30.0;
  a[1] = 20.0;
  a[2] = 10.0;
  a[3] = 25.0;
  a[4] = 15.0;
  sum = 0.0;
  for (i = 0; i < 5; i++)
    sum += a[i];

  avg = sum / 5.00;
  printf ("%f\n", avg);

  return 0;
}
