/* code: q13-4.c   (v1.20.00) */
#include<stdio.h>
#include<stdlib.h>

#define DATA_SIZE 10

struct node {
  int data;
  struct node *next;
};
typedef struct node NODE_TYPE;

struct linked_list {
  NODE_TYPE *head;
  NODE_TYPE *tail;
  NODE_TYPE *current;
};
typedef struct linked_list LINKED_LIST;

/* ------------------------------------------- */
void linked_list_init (LINKED_LIST * list) {
  list->head = NULL;
  list->tail = NULL;
  list->current = NULL;
}


/* ------------------------------------------- */
void linked_list_insert_node_h (LINKED_LIST * list, int data) {
  NODE_TYPE *node;

  node = malloc (sizeof (NODE_TYPE));

  node->data = data;

  if (NULL == list->head) {
    list->tail = node;
    node->next = NULL;
  }
  else {
    node->next = list->head;
  }
  list->head = node;
}

/* ------------------------------------------- */
void linked_list_insert_node_t (LINKED_LIST * list, int data) {
  NODE_TYPE *node;

  node = malloc (sizeof (NODE_TYPE));

  node->data = data;
  node->next = NULL;

  if (NULL == list->head) {
    list->head = node;
  }
  else {
    list->tail->next = node;
  }
  list->tail = node;
}

/* ------------------------------------------- */
NODE_TYPE *linked_list_find_node (LINKED_LIST * list, int data) {
  NODE_TYPE *node;

  node = list->head;
  while (NULL != node) {
    if (node->data == data) {
      return node;
    }
    node = node->next;
  }
  return NULL;
}


/* ------------------------------------------- */
void linked_list_delete_node (LINKED_LIST * list, NODE_TYPE * node) {
  if (node == list->head) {
    if (NULL == list->head->next) {
      list->head = NULL;
      list->tail = NULL;
    }
    else {
      list->head = list->head->next;
    }
  }
  else {
    NODE_TYPE *temp;
    temp = list->head;
    while ((NULL != temp) && (temp->next != node)) {
      temp = temp->next;
    }
    if (NULL != temp) {
      temp->next = node->next;
    }
  }
  free (node);
}

/* ------------------------------------------- */
void linked_list_print (LINKED_LIST * list) {
  NODE_TYPE *node;

  printf ("linked list [ ");
  node = list->head;
  while (NULL != node) {
    printf ("%02d ", node->data);
    node = node->next;
  }
  printf ("]\n");
}

/* ------------------------------------------- */
int linked_list_count_node (LINKED_LIST * list) {
  NODE_TYPE *node;
  int i;

  i = 0;
  node = list->head;
  while (NULL != node) {
    i++;
    node = node->next;
  }
  return i;
}



/* ------------------------------------------- */
int main () {
  LINKED_LIST *list;
  NODE_TYPE *node;
  int i, data1, data2, del_data;

  list = malloc (sizeof (LINKED_LIST));
  linked_list_init (list);

  for (i = 0; i < DATA_SIZE; i++) {
    data1 = (int) rand () % 100;
    printf ("adding node to head of linked list: ");
    printf ("%02d\n", data1);
    linked_list_insert_node_h (list, data1);
  }
  linked_list_print (list);


  for (i = 0; i < DATA_SIZE; i++) {
    data2 = (int) rand () % 100;
    printf ("adding node to tail of linked list: ");
    printf ("%02d\n", data2);
    linked_list_insert_node_t (list, data2);
  }
  linked_list_print (list);

  del_data = data2;
  printf ("finding node:  [%d]\n", del_data);
  node = linked_list_find_node (list, del_data);
  if (NULL != node) {
    printf ("deleting node: [%d]\n", del_data);
    linked_list_delete_node (list, node);
  }
  else {
    printf ("Node not found: [%d]\n", del_data);
  }
  linked_list_print (list);

  printf ("number of node(s):%d\n", linked_list_count_node (list));

  free (list);

  return 0;
}
