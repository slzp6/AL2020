/* code: ex14-2.c   (v1.20.00) */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DATA_SIZE 6
#define QUEUE_EMPTY (-1)

struct node {
  int data;
  struct node *next;
};
typedef struct node NODE_TYPE;

/* ------------------------------------------- */
void q_enque (NODE_TYPE ** front, NODE_TYPE ** rear, int data) {
  NODE_TYPE *new_node;
  new_node = malloc (sizeof (NODE_TYPE));
  new_node->data = data;
  new_node->next = NULL;
  if (*rear == NULL) {
    *front = *rear = new_node;
  }
  else {
    (*rear)->next = new_node;
    *rear = new_node;
  }
}

/* ------------------------------------------- */
int q_dequeue (NODE_TYPE ** front, NODE_TYPE ** rear) {
  int data;
  NODE_TYPE *temp;
  if (*front == NULL) {
    return QUEUE_EMPTY;
  }
  temp = *front;
  data = (*front)->data;
  if (*front == *rear) {
    *front = *rear = NULL;
  }
  else {
    *front = (*front)->next;
  }
  free (temp);
  return data;
}

/* ------------------------------------------- */
void q_print (NODE_TYPE * front) {
  printf ("queue [ ");
  while (front != NULL) {
    printf ("%02d ", front->data);
    front = front->next;
  }
  printf ("]\n");
}

/* ------------------------------------------- */
int main () {
  int i, data1;
  NODE_TYPE *front, *rear;

  front = NULL;
  rear = NULL;
  for (i = 0; i < DATA_SIZE; i++) {
    data1 = (int) rand () % 100;
    printf ("enqueue: ");
    printf ("%02d\n", data1);
    q_enque (&front, &rear, data1);
  }
  q_print (front);
  for (i = 0; i < DATA_SIZE / 2; i++) {
    printf ("dequeue: ");
    data1 = q_dequeue (&front, &rear);
    printf ("%02d\n", data1);
  }
  q_print (front);

  return 0;
}
