/* code: ex6-8.c   (v1.20.00) */
#include <stdio.h>

/* ------------------------------------------- */
void string_copy (char *target, char *source) {
  int i;
  i = 0;
  while (source[i] != '\0') {
    target[i] = source[i];
    i++;
  }
  target[i] = '\0';
}

/* ------------------------------------------- */
int main () {
  char s[20] = "University";
  char t[20];

  string_copy (t, s);
  printf ("%s\n", t);

  return 0;
}
