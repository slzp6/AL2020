/* code: q13-3.c   (v1.20.00) */
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
void linked_list_print (NODE_TYPE *head)
{
  printf ("Linked_list [ ");
  while (NULL != head) {
    printf ("%02d ", head->data);
    head = head->next;
  }
  printf ("]\n\n");
}


/* ------------------------------------------- */
void linked_list_insert_tail (NODE_TYPE **head, int data)
{
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
int linked_list_delete_tail (NODE_TYPE **head)
{
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
int main ()
{
  NODE_TYPE *head;
  int i, data1;

  head = NULL;
  for (i = 0; i < DATA_SIZE; i++) {
    data1 = (int) rand () % 100;
    printf ("adding (tail node): ");
    printf ("%02d\n", data1);
    linked_list_insert_tail (&head, data1);
  }


  linked_list_print (head);

  for (i = 0; i < DATA_SIZE; i++) {
    printf ("deleting (tail node): ");
    data1 = linked_list_delete_tail (&head);
    printf ("%02d\n", data1);
  }

  linked_list_print (head);
  return 0;
}
