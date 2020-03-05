/* code: ex4-2.c   (v1.20.00) */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
  int i, j, count, points;
  double x, y, q;
  double pi;

  for (j = 1; j < 10; j++) {
    points = 1;
    count = 0;
    points = points * pow (10, j);
    for (i = 0; i < points; i++) {
      x = (double) rand () / ((double) RAND_MAX + 1.0);
      y = (double) rand () / ((double) RAND_MAX + 1.0);
      q = (x * x) + (y * y);

      if (q <= 1.00)
	count++;
    }
    pi = (double) count / (double) points *(double) 4.00;
    printf ("circle: %10d\t", count);
    printf ("square: %10d\t", points);
    printf ("PI: %f (%+f)\n", pi, (pi - M_PI));
  }
  return 0;
}
