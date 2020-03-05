/* code: ex5-3.c   (v1.20.00) */
#include <stdio.h>

void print_numbers (void);

int main () {
  print_numbers ();
  print_numbers ();
  print_numbers ();
  return 0;
}

void print_numbers (void) {
  int i;

  for (i = 0; i < 10; i++)
    printf ("%d ", i);
  printf ("\n");
}
