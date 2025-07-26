/* code: ex1-4.c   (v1.20.00) */
#include <stdio.h>

int main ()
{
  int a, b, c;
  a = 10;
  b = 3;
  c = 0;
  printf ("a=%d\n", a);
  printf ("b=%d\n\n", b);
  c = a + b;
  printf ("a + b = %d\n", c);
  c = a - b;
  printf ("a - b = %d\n", c);
  c = a * b;
  printf ("a * b = %d\n", c);
  c = a / b;
  printf ("a / b = %d\n", c);
  c = a % b;
  printf ("a %% b = %d\n", c);

  return 0;
}
