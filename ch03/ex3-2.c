/* code: ex3-2.c   (v1.20.00) */
#include <stdio.h>

int main ()
{
  int i;

  for (i = 0; i < 10; i++) {
    printf ("%d", i);
    if (0 != (i % 2))
      printf (":odd ");
    else
      printf (":even ");
  }

  return 0;
}
