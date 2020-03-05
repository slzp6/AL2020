/* code: q6-6.c   (v1.20.00) */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

struct student {
  int id;
  char grade;
  char name[128];
};
typedef struct student STUDENT_TYPE;

/* ------------------------------------------- */
int main () {
  STUDENT_TYPE db1[MAX];
  STUDENT_TYPE *db2[MAX];
  int i;

  printf ("database1\n");
  for (i = 0; i < MAX; i++) {
    db1[i].id = 100 + i;
    db1[i].grade = 'a' + rand () % 5;
    strcpy (db1[i].name, "John Doe");
    printf ("%d %c %s\n", db1[i].id, db1[i].grade, db1[i].name);
  }

  printf ("\n");
  printf ("database2\n");
  for (i = 0; i < MAX; i++) {
    db2[i] = malloc (sizeof (STUDENT_TYPE));
    db2[i]->id = 200 + i;
    db2[i]->grade = 'a' + rand () % 5;
    strcpy (db2[i]->name, "John Doe");
    printf ("%d %c %s\t\t", db2[i]->id, db2[i]->grade, db2[i]->name);
    printf ("%d %c %s\n", (*db2[i]).id, (*db2[i]).grade, (*db2[i]).name);
  }
  for (i = 0; i < MAX; i++) {
    free (db2[i]);
  }


  return 0;
}
