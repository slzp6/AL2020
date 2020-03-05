/* code: q2-1.c   (v1.20.00) */
#include <stdio.h>

int main () {
  int x, y;

  printf ("enter X: ");
  scanf ("%d", &x);
  printf ("enter Y: ");
  scanf ("%d", &y);

  printf ("X = %d\n", x);
  printf ("Y = %d\n", y);

  if (x > y) {
    printf ("X is greater than Y.\n");
  }
  else {
    printf ("X is less than or equal to Y.\n");
  }

  return 0;
}
