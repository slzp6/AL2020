/* code: q8-1.c   (v1.20.00) */
#include<stdio.h>
#include<stdlib.h>

#define MAX 128			/* ring buffer max size */

#define ENQUEUE_SUCCESS     1
#define ENQUEUE_FAILURE    -1
#define DEQUEUE_SUCCESS     2
#define DEQUEUE_FAILURE    -2

/* ------------------------------------------- */
void rb_queue_init (int *front, int *rear)
{
  *front = 0;
  *rear = 0;
}

/* ------------------------------------------- */
int rb_enqueue (int q[], int *front, int *rear, int data)
{
  int index_f, index_r, index_q;
  index_f = *front % MAX;
  index_r = (*rear + 1) % MAX;
  if (index_f != index_r) {
    index_q = (*rear)++ % MAX;
    q[index_q] = data;
    return ENQUEUE_SUCCESS;
  }
  else {
    return ENQUEUE_FAILURE;
  }
}

/* ------------------------------------------- */
int rb_dequeue (int q[], int *front, int *rear, int *data)
{
  int index;
  if (*front != *rear) {
    index = (*front)++ % MAX;
    *data = q[index];
    return DEQUEUE_SUCCESS;
  }
  else {
    return DEQUEUE_FAILURE;
  }
}

/* ------------------------------------------- */
int main ()
{
  int queue[MAX];
  int front, rear, data;
  int stat;

  rb_queue_init (&front, &rear);

  rb_enqueue (queue, &front, &rear, 100);
  rb_enqueue (queue, &front, &rear, 200);
  rb_enqueue (queue, &front, &rear, 300);
  rb_enqueue (queue, &front, &rear, 400);
  rb_enqueue (queue, &front, &rear, 500);

  while (rear - front) {
    stat = rb_dequeue (queue, &front, &rear, &data);
    if (stat == DEQUEUE_SUCCESS) {
      printf ("%d\n", data);
    }
    else {
      printf ("QUEUE is empty\n");
    }
  }

  return 0;
}
