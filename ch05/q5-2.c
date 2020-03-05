/* code: q5-2.c   (v1.20.00) */
#include <stdio.h>

struct student {
  int id;
  char grade;
  float average;
};
typedef struct student STUDENT_TYPE;

STUDENT_TYPE initialize_student_record (STUDENT_TYPE s) {
  s.id++;
  s.grade = 'x';
  s.average = 0.0;
  return s;
}

int main () {
  STUDENT_TYPE student;

  student.id = 20;
  student.grade = 'a';
  student.average = 300.000;
  printf ("%d %c %f\n", student.id, student.grade, student.average);
  student = initialize_student_record (student);
  printf ("%d %c %f\n", student.id, student.grade, student.average);

  return 0;
}
