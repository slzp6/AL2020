/* code: q5-3.c   (v1.20.00) */
#include <stdio.h>

int fibonacci (int n)
{
  if (n == 0) {
    return 0;
  }
  else if (n == 1) {
    return 1;
  }
  else {
    return (fibonacci (n - 1) + fibonacci (n - 2));
  }
}

int main ()
{
  int i;
  i = 10;
  printf ("fibonacci(%d) = %d\n", i, fibonacci (i));

  return 0;
}
