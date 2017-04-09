/*
 * new_list.c
 * tests_file: new_list_tests.c
 *
 * Linked list constructor
 *
 * @param: list: Pointer to an allocated space for the linked list
 *
 * @return: void
 */


#include <stdlib.h>
#include "./new_list.h"


void new_list(list_t* list)
{
  list->head = NULL;
  list->len = 0;
}
