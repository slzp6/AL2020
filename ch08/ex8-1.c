/* code: ex8-1.c   (v1.20.00) */
#include<stdio.h>
#include<stdlib.h>

#define MAX 128
#define PUSH_SUCCESS    1
#define PUSH_FAILURE   -1
#define POP_SUCCESS     2
#define POP_FAILURE    -2

/* ------------------------------------------- */
void stack_init (int *top) {
  *top = 0;
}

/* ------------------------------------------- */
void display (int stack[], int top) {
  int i;
  printf ("STACK(%d): ", top);
  for (i = 0; i < top; i++) {
    printf ("%d ", stack[i]);
  }
  printf ("\n");
}

/* ------------------------------------------- */
int push (int stack[], int *top, int data) {
  if (*top >= MAX) {
    /* stack overflow */
    return PUSH_FAILURE;
  }
  else {
    stack[*top] = data;
    (*top)++;
    return PUSH_SUCCESS;
  }
}

/* ------------------------------------------- */
int pop (int stack[], int *top, int *data) {
  if ((*top) > 0) {
    *data = stack[(*top) - 1];
    (*top)--;
    return POP_SUCCESS;
  }
  else {
    /* stack empty */
    return POP_FAILURE;
  }
}

/* ------------------------------------------- */
int main () {
  int stack[MAX];
  int top, data;

  stack_init (&top);
  data = 300;
  printf ("push: %d\n", data);
  push (stack, &top, data);
  data = 400;
  printf ("push: %d\n", data);
  push (stack, &top, data);
  data = 500;
  printf ("push: %d\n", data);
  push (stack, &top, data);
  display (stack, top);
  pop (stack, &top, &data);
  printf ("pop:  %d\n", data);
  pop (stack, &top, &data);
  printf ("pop:  %d\n", data);
  pop (stack, &top, &data);
  printf ("pop:  %d\n", data);
  return 0;
}
