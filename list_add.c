/*
 * list_add.c
 * tests_file: list_add_tests.c
 *
 * Add a new node to a linked list
 * The node sits at the beginning of the list
 *
 * @param: list: Pointer to an already initialized linked list
 * @param: node: Pointer to a new node to be added to the linked list
 *
 * @return: void
 */


#include "./list_add.h"


void list_add(list_t* list, listnode_t* node)
{
  node->next = list->head;
  list->head = node;
  list->len++;
}
