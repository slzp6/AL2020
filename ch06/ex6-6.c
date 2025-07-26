/* code: ex6-6.c   (v1.20.00) */
#include <stdio.h>

int main ()
{
  int i, j, k;
  int a[2][3][4] = {
    {{0, 1, 2, 3},
     {4, 5, 6, 7},
     {8, 9, 10, 11}},
    {{0, 10, 20, 30},
     {40, 50, 60, 70},
     {80, 90, 100, 110}}
  };

  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 4; k++) {
	printf ("array[%d][%d][%d]=%3d\n", i, j, k, a[i][j][k]);
      }
    }
  }

  return 0;
}
