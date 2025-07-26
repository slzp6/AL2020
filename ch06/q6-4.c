/* code: q6-4.c   (v1.20.00) */
#include <stdio.h>
#include <string.h>

/* ------------------------------------------- */
int main ()
{
  char s0[] = "aaaaa";
  char s1[] = "bbbbb";
  char s2[] = "aaaaaaa";
  int i;
  printf ("strncmp(str1, str2, 3)\n");
  i = strncmp (s0, s0, 3);
  printf ("[%s] [%s] (%d)\n", s0, s0, i);
  i = strncmp (s0, s1, 3);
  printf ("[%s] [%s] (%d)\n", s0, s1, i);
  i = strncmp (s1, s0, 3);
  printf ("[%s] [%s] (%d)\n", s1, s0, i);
  i = strncmp (s0, s2, 3);
  printf ("[%s] [%s] (%d)\n", s0, s2, i);

  return 0;
}
