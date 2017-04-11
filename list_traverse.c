/*
 * list_traverse.c
 * tests_file: list_traverse_tests.c
 *
 * Traversing through a linked list
 *
 * @param: list: Pointer to an already initialized linked list
 * @param: func: A function to run on each node
 * @param: data: Data which will be passed to the func
 *
 * @return: void
 */

#include "list_traverse.h"


void list_traverse(list_t* list, void (*func)(listnode_t*, void*), void* data)
{
  listnode_t* node = list->head;

  while(node){
    func(node, data);
    node = node->next;
  }
}
