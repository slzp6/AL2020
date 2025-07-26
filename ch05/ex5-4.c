/* code: ex5-4.c   (v1.20.00) */
#include <stdio.h>

void g (void)
{
  int i;
  for (i = 0; i < 3; i++) {
    printf ("a");
  }
}

void f (void)
{
  int i;
  for (i = 0; i < 5; i++) {
    g ();
  }
}

int main (int argc, char **argv)
{
  f ();
  return 0;
}
