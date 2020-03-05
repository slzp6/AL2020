/* code: ex12-2.c   (v1.20.00) */
#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 3000000

int array[ARRAY_SIZE];

int main () {
  int i;
  for (i = 0; i < ARRAY_SIZE; i++) {
    array[i] = 100;
  }
  for (i = 0; i < 10; i++) {
    printf ("%d ", array[i]);
  }
  return 0;
}
