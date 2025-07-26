/* code: ex1-2.c   (v1.20.00) */
#include <stdio.h>

int main ()
{
  int a;
  printf ("Enter an integer: ");
  scanf ("%d", &a);
  printf ("The integer you entered was %d.\n", a);

  return 0;
}

/* In Visual Studio (C++), it is recommended to 
use the scanf_s() function instead of the scanf() 
function used in Chapter 1. 
However, it is possible to use scanf() with 
the setting #pragma warning(disable:4996). */
