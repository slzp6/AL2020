/* code: q2-2.c   (v1.20.00) */
#include <stdio.h>

int main () {
  char grade;

  grade = 'b';

  switch (grade) {
  case 'a':
  case 'A':
    printf ("excellent\n");
    break;
  case 'b':
  case 'B':
    printf ("good\n");
    break;
  case 'c':
  case 'C':
    printf ("fair\n");
    break;
  case 'd':
  case 'D':
    printf ("barely passing\n");
    break;
  case 'f':
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
