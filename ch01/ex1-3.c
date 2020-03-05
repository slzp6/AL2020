/* code: ex1-3.c   (v1.20.00) */
#include <stdio.h>

int main () {
  char a;
  short b;
  int c;
  long d;
  float e;
  double f;
  printf ("char:   %zd byte(s)\n", sizeof (a));
  printf ("short:  %zd byte(s)\n", sizeof (b));
  printf ("int:    %zd byte(s)\n", sizeof (c));
  printf ("long:   %zd byte(s)\n", sizeof (d));
  printf ("float:  %zd byte(s)\n", sizeof (e));
  printf ("double: %zd byte(s)\n", sizeof (f));

  return 0;

}
