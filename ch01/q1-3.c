/* code: q1-3.c   (v1.20.00) */
#include <stdio.h>
#include <math.h>

int main () {
  float fahrenheit, celsius;

  fahrenheit = 25.1;
  celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
  printf ("%f(Fahrenheit) = %f(Celsius)\n", fahrenheit, celsius);

  return 0;
}
