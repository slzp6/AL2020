/* code: q2-3a.c   (v1.20.00) */
#include <stdio.h>

int main ()
{
  int a;
  a = 3;
  switch (a) {
  case 0:
  case 1:
  case 2:
    printf ("A\n");
    break;
  case 3:
  case 4:
    printf ("B\n");
    break;
  default:
    printf ("ERROR: invalid number\n");
    break;
  }

  return 0;
}
