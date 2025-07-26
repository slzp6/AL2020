/* code: ex5-6.c   (v1.20.00) */
#include <stdio.h>

void add_pass_by_value (int i)
{
  i = i + 1;
}

void add_pass_by_reference (int *i)
{
  *i = *i + 1;
}

int main ()
{
  int a;

  a = 10;
  add_pass_by_value (a);
  printf ("%d\n", a);

  a = 10;
  add_pass_by_reference (&a);
  printf ("%d\n", a);

  return 0;
}
