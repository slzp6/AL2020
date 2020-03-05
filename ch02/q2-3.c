/* code: q2-3.c   (v1.20.00) */
#include <stdio.h>

int main () {
  int a;
  a = 3;

  if (a == 0 || a == 1 || a == 2) {
    printf ("A\n");
  }
  else if (a == 3 || a == 4) {
    printf ("B\n");
  }
  else {
    printf ("ERROR: invalid number\n");
  }

  return 0;
}
