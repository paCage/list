/*
 * list_pop.c
 * tests_file: list_pop_tests.c
 *
 * Pop a new node to a linked list
 * The node sits at the beginning of the list
 *
 * @param: list: Pointer to an already initialized linked list
 * @param: node: Pointer to a new node to be poped to the linked list
 *
 * @return: void
 */


#include <stdlib.h>
#include "./list_pop.h"


listnode_t* list_pop(list_t* list)
{
  if (!list->head)
    return NULL;

  listnode_t* node = list->head;
  list->head = node->next;

  list->len--;

  return node;
}
