/* code: q6-2.c   (v1.20.00) */
#include <stdio.h>
#define TABLE 9
int main ()
{
  int i, j;
  int a[TABLE][TABLE];

  for (i = 0; i < TABLE; i++) {
    for (j = 0; j < TABLE; j++) {
      a[i][j] = (i + 1) * (j + 1);
    }
  }
  for (i = 0; i < TABLE; i++) {
    for (j = 0; j < TABLE; j++) {
      printf ("%02d ", a[i][j]);
    }
    printf ("\n");
  }
  return 0;
}
