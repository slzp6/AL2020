/* code: ex13-3.c   (v1.20.00) */
#include<stdio.h>
#include<stdlib.h>

#define NOT_FOUND (-1)
#define DATA_SIZE 6

struct node
{
  int data;
  struct node *next;
};
typedef struct node NODE_TYPE;

/* ------------------------------------------- */
int linked_list_delete_head (NODE_TYPE **head)
{
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
void linked_list_insert_head (NODE_TYPE **head, int data)
{
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
void linked_list_print (NODE_TYPE *head)
{
  printf ("Linked_list [ ");
  while (NULL != head) {
    printf ("%02d ", head->data);
    head = head->next;
  }
  printf ("]\n");
}

/* ------------------------------------------- */
int main ()
{
  NODE_TYPE *head;
  int i, data1;

  head = NULL;
  for (i = 0; i < DATA_SIZE; i++) {
    data1 = (int) rand () % 100;
    printf ("inserting (head): ");
    printf ("%02d\n", data1);
    linked_list_insert_head (&head, data1);
  }
  linked_list_print (head);
  for (i = 0; i < DATA_SIZE / 2; i++) {
    printf ("deleting (head): ");
    data1 = linked_list_delete_head (&head);
    printf ("%02d\n", data1);
  }
  linked_list_print (head);
  return 0;
}
