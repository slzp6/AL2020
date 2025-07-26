/* code: ex13-1.c   (v1.20.00) */
#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};
typedef struct node NODE_TYPE;

/* ------------------------------------------- */
void linked_list_print (NODE_TYPE *node)
{
  while (NULL != node) {
    printf ("%d ", node->data);
    node = node->next;
  }
  printf ("\n");
}

/* ------------------------------------------- */
int main ()
{
  NODE_TYPE *node;
  node = malloc (sizeof (NODE_TYPE));
  node->data = 300;
  node->next = malloc (sizeof (NODE_TYPE));
  node->next->data = 400;
  node->next->next = malloc (sizeof (NODE_TYPE));
  node->next->next->data = 500;
  node->next->next->next = malloc (sizeof (NODE_TYPE));
  node->next->next->next->data = 600;
  node->next->next->next->next = NULL;
  linked_list_print (node);
  return 0;
}
