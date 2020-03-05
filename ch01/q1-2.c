/* code: q1-2.c   (v1.20.00) */
#include <stdio.h>
#include <math.h>

int main () {
  float fx, fz;
  double dx, dz;
  long double lx, lz;

  fx = 100.00F;
  fz = sqrtf (fx);
  printf ("fx = %f\n", fx);
  printf ("sqrtf(fx) = %f\n\n", fz);

  dx = 100.00;
  dz = sqrt (dx);
  printf ("dx = %f\n", dx);
  printf ("sqrt(dx)  = %f\n\n", dz);

  lx = 100.00L;
  lz = sqrtl (lx);
  printf ("lx = %Lf\n", lx);
  printf ("sqrtl(lx) = %Lf\n\n", lz);

  return 0;
}
