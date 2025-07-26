/* code: ex2-3.c   (v1.20.00) */
#include <stdio.h>

int main ()
{
  char grade;

  grade = 'B';

  switch (grade) {
  case 'A':
    printf ("excellent\n");
    break;
  case 'B':
    printf ("good\n");
    break;
  case 'C':
    printf ("fair\n");
    break;
  case 'D':
    printf ("barely passing\n");
    break;
  case 'F':
    printf ("not passing\n");
    break;
  default:
    printf ("ERROR: invalid character\n");
    break;
  }
  printf ("Your grade is  %c\n", grade);
  return 0;
}
