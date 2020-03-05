/* code: ex3-10.c   (v1.20.00) */
#include <stdio.h>

int main () {
  int i;

  i = 0;
  while (1) {
    printf ("%d ", i);
    if (i == 5) {
      i = 0;
      break;
    }
    i++;
  }

  return 0;
}
