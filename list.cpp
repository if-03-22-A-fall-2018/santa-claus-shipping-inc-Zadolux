#include <stdlib.h>
#include "list.h"

struct node {
  struct node* next;
  void* data;
};

struct list {
  Node* head;
};

List list_new;

/**
 * Used to create a list structure
 */
List* list_create()
{
  return &list_new;
}

/**
 * Used to free all memory the supplied list allocated
 * (hint: list structure, including the list itself, but not the data!)
 */
void list_delete(List *list)
{

}

/**
 * Adds a new node with the supplied data to the start of the list
 */
void list_add(List *list, void *data)
{
  Node* createdNode = (Node*)malloc(sizeof(Node));
  createdNode->data = (Node*)data;

  if(list->head == 0)
  {
    list->head = createdNode;
  }
  else
  {
    createdNode->next = list->head;
    list->head = createdNode;
  }
}

/**
 * Adds a new node with the supplied data after the supplied node
 */
void list_insert_after(Node *node, void *data)
{
  Node* createdNode = (Node*)malloc(sizeof(Node));
  createdNode->data = (Node*)data;

  node->next = createdNode;
}

/**
 * Return the head of the list
 */
Node* list_get_first(List *list)
{
  return list->head;
}

/**
 * Returns the next node in the list
 * (hint: be careful if the last node in the list is supplied)
 */
Node* list_get_next(Node *node)
{
  return node->next;
}

/**
 * Retrieves the data stored in the supplied node
 * (hint: you'll probably won't be able to use this void* without casting)
 */
void* list_get_data(Node *node)
{
  return node->data;
}
