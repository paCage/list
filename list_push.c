/*
 * list_push.c
 * tests_file: list_push_tests.c
 *
 * Push a new node to a linked list
 * The node sits at the beginning of the list
 *
 * @param: list: Pointer to an already initialized linked list
 * @param: node: Pointer to a new node to be pushed to the linked list
 *
 * @return: void
 */


#include "./list_push.h"


void list_push(list_t* list, listnode_t* node)
{
  node->next = list->head;
  list->head = node;
  list->len++;
}
