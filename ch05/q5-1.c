/* code: q5-1.c   (v1.20.00) */
#include <stdio.h>

float trapezoid (float a, float b, float h)
{
  float c;
  c = ((a + b) / 2.000F) * h;
  return c;
}

int main ()
{
  float t;
  t = trapezoid (3.00, 4.00, 5.00);
  printf ("trapezoid = %f\n", t);
  t = trapezoid (5.00, 6.00, 7.00);
  printf ("trapezoid = %f\n", t);

  return 0;
}
