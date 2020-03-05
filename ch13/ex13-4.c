/* code: ex13-4.c   (v1.20.00) */
#include<stdio.h>
#include<stdlib.h>

#define NOT_FOUND (-1)
#define DATA_SIZE 6

struct node {
  int data;
  struct node *next;
};
typedef struct node NODE_TYPE;

/* ------------------------------------------- */
int linked_list_search_node (NODE_TYPE * head, int key) {
  int i;
  i = 0;
  while (NULL != head) {
    if (key == head->data) {
      return i;
    }
    head = head->next;
    i++;
  }
  return NOT_FOUND;
}

/* ------------------------------------------- */
int linked_list_length (NODE_TYPE * head) {
  int c;
  c = 0;
  while (NULL != head) {
    head = head->next;
    c++;
  }
  return c;
}

/* ------------------------------------------- */
void linked_list_print (NODE_TYPE * head) {
  printf ("Linked_list [ ");
  while (NULL != head) {
    printf ("%02d ", head->data);
    head = head->next;
  }
  printf ("]\n");
}

/* ------------------------------------------- */
void linked_list_insert_head (NODE_TYPE ** head, int data) {
  NODE_TYPE *new_node;
  new_node = malloc (sizeof (NODE_TYPE));
  new_node->data = data;
  if (*head == NULL) {
    new_node->next = NULL;
    *head = new_node;
  }
  else {
    new_node->next = *head;
    *head = new_node;
  }
}

/* ------------------------------------------- */
int linked_list_delete_head (NODE_TYPE ** head) {
  int data;
  NODE_TYPE *temp;
  if (*head == NULL) {
    return NOT_FOUND;
  }
  data = (*head)->data;
  temp = (*head);
  *head = (*head)->next;
  free (temp);
  return data;
}

/* ------------------------------------------- */
void linked_list_insert_tail (NODE_TYPE ** head, int data) {
  NODE_TYPE *new_node;
  NODE_TYPE *temp;
  new_node = malloc (sizeof (NODE_TYPE));

  new_node->data = data;
  new_node->next = NULL;
  if (*head == NULL) {
    *head = new_node;
    temp = new_node;
  }
  else {
    temp = *head;
    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = new_node;
  }
}

/* ------------------------------------------- */
int linked_list_delete_tail (NODE_TYPE ** head) {
  int data;
  NODE_TYPE *temp;
  NODE_TYPE *prev;

  data = NOT_FOUND;
  if (*head == NULL) {
    return data;
  }
  else {
    temp = *head;
    prev = *head;
    while (temp->next != NULL) {
      prev = temp;
      temp = temp->next;
    }
    data = temp->data;
    if ((*head)->next == NULL) {
      *head = NULL;
    }
    else {
      prev->next = NULL;
    }
    free (temp);
  }
  return data;
}


/* ------------------------------------------- */
void linked_list_delete_all (NODE_TYPE ** head) {
  NODE_TYPE *current;
  NODE_TYPE *next;

  current = *head;
  while (current != NULL) {
    next = current->next;
    free (current);
    current = next;
  }
  *head = NULL;
}


/* ------------------------------------------- */
int main () {
  NODE_TYPE *head;
  int i, data1;

  head = NULL;
  for (i = 0; i < DATA_SIZE; i++) {
    data1 = (int) rand () % 100;
    printf ("adding (head node): ");
    printf ("%02d\n", data1);
    linked_list_insert_head (&head, data1);
  }
  linked_list_print (head);

  for (i = 0; i < DATA_SIZE; i++) {
    data1 = (int) rand () % 100;
    printf ("adding (tail node): ");
    printf ("%02d\n", data1);
    linked_list_insert_tail (&head, data1);
  }
  linked_list_print (head);

  for (i = 0; i < DATA_SIZE / 2; i++) {
    printf ("deleting (head node): ");
    data1 = linked_list_delete_head (&head);
    printf ("%02d\n", data1);
  }
  linked_list_print (head);

  for (i = 0; i < DATA_SIZE / 2; i++) {
    printf ("deleting (tail node): ");
    data1 = linked_list_delete_tail (&head);
    printf ("%02d\n", data1);
  }
  linked_list_print (head);
  printf ("Length of the linked list :%d\n", linked_list_length (head));

  printf ("deleting entire linked list\n");
  linked_list_delete_all (&head);
  linked_list_print (head);
  return 0;
}
