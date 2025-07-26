/* code: ex1-6.c   (v1.20.00) */
#include <stdio.h>
#include <math.h>

int main ()
{
  float celsius, fahrenheit;

  celsius = 36.5;
  fahrenheit = (9.0 / 5.0) * celsius + 32.0;
  printf ("%f(Celsius) = %f(Fahrenheit)\n", celsius, fahrenheit);

  return 0;
}
