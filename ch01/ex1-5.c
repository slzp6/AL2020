/* code: ex1-5.c   (v1.20.00) */
#include <stdio.h>
#include <math.h>

int main () {
  double x, y, z;
  x = 30.0;
  y = 3.0;
  z = 0.0;
  printf ("x=%f\n", x);
  printf ("y=%f\n\n", y);
  z = pow (x, y);
  printf ("pow(x,y) = %f\n", z);

  return 0;
}
