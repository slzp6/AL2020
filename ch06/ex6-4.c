/* code: ex6-4.c   (v1.20.00) */
#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

int main () {
  int a[ARRAY_SIZE];
  int i;

  for (i = 0; i < ARRAY_SIZE; i++)
    a[i] = rand () % 100;

  for (i = 0; i < ARRAY_SIZE; i++)
    printf ("%03d ", a[i]);

  return 0;
}
