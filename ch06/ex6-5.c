/* code: ex6-5.c   (v1.20.00) */
#include <stdio.h>

int main () {
  int i, j;
  int a[3][4] = {
    {0, 10, 20, 30},
    {40, 50, 60, 70},
    {80, 90, 100, 110}
  };

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) {
      printf ("array[%d][%d]=%3d\n", i, j, a[i][j]);
    }
  }

  return 0;
}
