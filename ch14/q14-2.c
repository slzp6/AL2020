/* code: q14-2.c   (v1.20.00) */
#include<stdio.h>
#include<stdlib.h>

#define DATA_SIZE 6

/* circular doubly linked list */
struct node {
  int data;
  struct node *prev;
  struct node *next;
};
typedef struct node NODE_TYPE;

/* ------------------------------------------- */
void cdll_print_head (NODE_TYPE * head, NODE_TYPE * tail) {

  if ((head == tail) && (head == NULL)) {
    printf ("List is empty\n");
    return;
  }
  printf ("print  (head): ");
  while (head->next != tail->next) {
    printf ("%d ", head->data);
    head = head->next;
  }
  printf ("%d \n", head->data);
}


/* ------------------------------------------- */
void cdll_print_tail (NODE_TYPE * head, NODE_TYPE * tail) {

  if ((head == tail) && (head == NULL)) {
    printf ("List is empty\n");
    return;
  }
  printf ("print  (tail): ");
  while (head->prev != tail->prev) {
    printf ("%d ", tail->data);
    tail = tail->prev;
  }
  printf ("%d \n", tail->data);
}


/* ------------------------------------------- */
void cdll_insert_head (NODE_TYPE ** head, NODE_TYPE ** tail, int data) {
  NODE_TYPE *new_node;

  new_node = malloc (sizeof (NODE_TYPE));
  new_node->data = data;
  new_node->prev = NULL;
  new_node->next = NULL;

  if ((*head == *tail) && (*head == NULL)) {
    *head = new_node;
    *tail = new_node;
    (*head)->prev = NULL;
    (*head)->next = NULL;
    (*tail)->prev = NULL;
    (*tail)->next = NULL;
  }
  else {
    new_node->next = *head;
    (*head)->prev = new_node;
    *head = new_node;
    (*head)->prev = *tail;
    (*tail)->next = *head;
  }
}




/* ------------------------------------------- */
void cdll_insert_tail (NODE_TYPE ** head, NODE_TYPE ** tail, int data) {
  NODE_TYPE *new_node;

  new_node = malloc (sizeof (NODE_TYPE));
  new_node->data = data;
  new_node->prev = NULL;
  new_node->next = NULL;

  if ((*head == *tail) && (*head == NULL)) {
    *head = new_node;
    *tail = new_node;
    (*head)->prev = NULL;
    (*head)->next = NULL;
    (*tail)->prev = NULL;
    (*tail)->next = NULL;
  }
  else {
    (*tail)->next = new_node;
    new_node->prev = *tail;
    *tail = new_node;
    (*head)->prev = *tail;
    (*tail)->next = *head;
  }
}


/* ------------------------------------------- */
int main () {
  NODE_TYPE *head;
  NODE_TYPE *tail;
  int i, data;

  head = NULL;
  tail = NULL;
  for (i = 0; i < DATA_SIZE; i++) {
    data = (int) rand () % 100;
    printf ("adding (head): ");
    printf ("%02d\n", data);
    cdll_insert_head (&head, &tail, data);
  }
  cdll_print_head (head, tail);
  cdll_print_tail (head, tail);

  for (i = 0; i < DATA_SIZE; i++) {
    data = (int) rand () % 100;
    printf ("adding (tail): ");
    printf ("%02d\n", data);
    cdll_insert_tail (&head, &tail, data);
  }
  cdll_print_head (head, tail);
  cdll_print_tail (head, tail);

  return 0;
}
