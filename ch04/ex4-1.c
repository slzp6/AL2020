/* code: ex4-1.c   (v1.20.00) */
#include <stdio.h>
#include <stdlib.h>

#define POINTS 1000

int main ()
{
  int i, count, points;
  double x, y, q;
  double pi;

  points = POINTS;
  count = 0;

  for (i = 0; i < points; i++) {
    x = (double) rand () / ((double) RAND_MAX + 1.0);
    y = (double) rand () / ((double) RAND_MAX + 1.0);
    q = (x * x) + (y * y);

    if (q <= 1.00)
      count++;
  }

  pi = (double) count / (double) points *(double) 4.00;
  printf ("circle: %d\t", count);
  printf ("square: %d\t", points);
  printf ("PI: %f\n", pi);

  return 0;
}
