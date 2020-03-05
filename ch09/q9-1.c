/* code: q9-1.c   (v1.20.00) */
#include <stdio.h>
#include <stdlib.h>

#define IRIS_DATA "iris.dat"
#define MAX_ARRAY 256

struct iris {
  float sl, sw, pl, pw;
  char name[128];
};
typedef struct iris IRIS_TYPE;

/* ------------------------------------------- */
int read_iris_data (IRIS_TYPE data[], int num, char *filename) {
  FILE *fptr;
  float sl, sw, pl, pw;
  char name[128];
  int n;
  if (NULL == (fptr = fopen (filename, "r"))) {
    fprintf (stderr, "ERROR: Can not open file [%s]", filename);
    exit (-1);
  }
  n = 0;
  while (EOF != fscanf (fptr, "%f,%f,%f,%f,%s", &sl, &sw, &pl, &pw, name)) {
    data[n].sl = sl;
    data[n].sw = sw;
    data[n].pl = pl;
    data[n].pw = pw;
    sprintf (data[n].name, "%s", name);
    n++;
    if (n >= num) {
      fprintf (stderr, "ERROR: Not enough array size");
      exit (-1);
    }
  }
  fclose (fptr);
  return n;
}

/* ------------------------------------------- */
IRIS_TYPE find_iris_avg (IRIS_TYPE data[], int num) {
  IRIS_TYPE avg;
  int i;
  float s_sl, s_sw, s_pl, s_pw;

  s_sl = s_sw = s_pl = s_pw = 0.0;
  for (i = 0; i < num; i++) {
    s_sl += data[i].sl;
    s_sw += data[i].sw;
    s_pl += data[i].pl;
    s_pw += data[i].pw;
  }

  avg.sl = s_sl / (float) num;
  avg.sw = s_sw / (float) num;
  avg.pl = s_pl / (float) num;
  avg.pw = s_pw / (float) num;
  sprintf (avg.name, "%s", "average");
  return avg;
}

/* ------------------------------------------- */
int main () {
  int num;
  IRIS_TYPE iris_data[MAX_ARRAY];
  IRIS_TYPE avg;

  num = read_iris_data (iris_data, MAX_ARRAY, IRIS_DATA);
  avg = find_iris_avg (iris_data, num);
  printf ("iris data : %d\n", num);
  printf ("avg. sepal length: %f\n", avg.sl);
  printf ("avg. sepal width : %f\n", avg.sw);
  printf ("avg. petal length: %f\n", avg.pl);
  printf ("avg. petal width : %f\n", avg.pw);

  return 0;
}
