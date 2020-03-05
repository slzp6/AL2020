/* code: ex6-10.c   (v1.20.00) */
#include <stdio.h>
#include <string.h>

int main () {
  char s0[] = "aaaaa";
  char s1[] = "bbbbb";
  char s2[] = "aaaaaaa";
  int i;
  printf ("strcmp(str1, str2)\n");
  i = strcmp (s0, s0);
  printf ("[%s] [%s] (%d)\n", s0, s0, i);
  i = strcmp (s0, s1);
  printf ("[%s] [%s] (%d)\n", s0, s1, i);
  i = strcmp (s1, s0);
  printf ("[%s] [%s] (%d)\n", s1, s0, i);
  i = strcmp (s0, s2);
  printf ("[%s] [%s] (%d)\n", s0, s2, i);

  return 0;
}
