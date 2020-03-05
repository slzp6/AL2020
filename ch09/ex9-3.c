/* code: ex9-3.c   (v1.20.00) */
#include <stdio.h>
#include <stdlib.h>

#define IRIS_DATA "iris.dat"

int main () {
  FILE *fptr;
  float sl, sw, pl, pw;
  float s_sl, s_sw, s_pl, s_pw;
  char name[128];
  int n;

  if (NULL == (fptr = fopen (IRIS_DATA, "r"))) {
    fprintf (stderr, "ERROR: Can not open file [%s]", IRIS_DATA);
    exit (-1);
  }
  n = 0;
  s_sl = s_sw = s_pl = s_pw = 0.0;
  while (EOF != fscanf (fptr, "%f,%f,%f,%f,%s", &sl, &sw, &pl, &pw, name)) {
    s_sl += sl;
    s_sw += sw;
    s_pl += pl;
    s_pw += pw;
    n++;
  }
  printf ("iris data : %d\n", n);
  printf ("avg. sepal length: %f\n", s_sl / (float) n);
  printf ("avg. sepal width : %f\n", s_sw / (float) n);
  printf ("avg. petal length: %f\n", s_pl / (float) n);
  printf ("avg. petal width : %f\n", s_pw / (float) n);
  fclose (fptr);

  return 0;
}
