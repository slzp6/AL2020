/* code: q6-3.c   (v1.20.00) */
#include <stdio.h>
#include <stdlib.h>

int main () {
  int i, j, k;
  int array[2][3][4];

  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 4; k++) {
	array[i][j][k] = (rand () % 100) + 1;
      }
    }
  }
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 4; k++) {
	printf ("%03d ", array[i][j][k]);
      }
      printf ("\n");
    }
    printf ("\n");
  }
  return 0;
}
