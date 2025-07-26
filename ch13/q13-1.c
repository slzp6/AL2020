/* code: q13-1.c   (v1.20.00) */
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
int linked_list_search_node (NODE_TYPE *head, int key)
{
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
int main ()
{
  NODE_TYPE *head;
  int i, data1, data2, stat;

  head = NULL;
  data2 = 0;
  for (i = 0; i < DATA_SIZE; i++) {
    data1 = (int) rand () % 100;
    printf ("adding (head node): ");
    printf ("%02d\n", data1);
    linked_list_insert_head (&head, data1);
    if (i == (DATA_SIZE / 2)) {
      data2 = data1;
    }
  }

  linked_list_print (head);

  stat = linked_list_search_node (head, data2);
  if (stat == NOT_FOUND) {
    printf ("not found : %d", data2);
  }
  else {
    printf ("found : %d  (%d)", data2, stat);
  }
  return 0;
}
