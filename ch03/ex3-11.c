/* code: ex3-11.c   (v1.20.00) */
#include <stdio.h>

int main ()
{
  int i;

  i = 0;
  while (1) {
    printf ("%d ", i);
    if (i == 5) {
      i = 0;
      continue;
    }
    i++;
  }

  return 0;
}
