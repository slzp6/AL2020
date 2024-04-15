/* code: q7-3-vs.c   (v1.20.00) */

/* Visual Studio 2022 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 1000000
 
/* ------------------------------------------- */
void array_print (int a[], int max) {
  int i;
  for (i = 0; i < max; i++) {
    printf ("%02d ", a[i]);
  }
  printf ("\n");
}
 
/* ------------------------------------------- */
int array_find_empty (int a[], int max) {
  int i;
  for (i = 0; i < max; i++) {
    if (a[i] == -1) {
      return i;
    }
  }
  return -1;
}
 
/* ------------------------------------------- */
void array_insert (int a[], int max, int index, int empty, int data) {
  int i;
  if (empty > index) {
    for (i = empty; i > index; i--) {
      a[i] = a[i - 1];
    }
  }
  else {
    for (i = empty; i < index; i++) {
      a[i] = a[i + 1];
    }
  }
  a[index] = data;
}
 
/* ------------------------------------------- */
int array_delete (int a[], int index) {
  int data;
  data = a[index];
  a[index] = -1;
  return data;
}
 

/* ------------------------------------------- */
int main() {
    int i, j, index_ins, index_del, empty, data;
    
    int* a;
    a = (int*) malloc(sizeof(int) * MAX);
    if (a == NULL) {
        printf("Error! memory not allocated.");
        exit(EXIT_FAILURE);
    }

    for (j = 0; j < MAX; j++) {
        a[j] = rand() % 100;
    }
    data = a[MAX / 2];
    a[MAX / 2] = -1;

    for (i = 0; i < 1000; i++) {
        index_ins = rand() % MAX;
        index_del = rand() % MAX;
        /* printf("ins:%d  del:%d\n", index_ins, index_del );  */

        empty = array_find_empty(a, MAX);
        /* printf("empty:%d\n", empty ); */

        array_insert(a, MAX, index_ins, empty, data);

        data = array_delete(a, index_del);
        /* array_print( a, MAX ); */
    }


    free(a);

    return 0;
}
