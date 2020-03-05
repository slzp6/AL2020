/* code: ex9-1.c   (v1.20.00) */
#include <stdio.h>
#include <stdlib.h>

int main () {
  FILE *fptr;
  fptr = fopen ("ex9-1-output.txt", "w");
  fprintf (fptr, "The Open University of Japan\n");
  fclose (fptr);
  return 0;
}
