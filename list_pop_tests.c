/*
 * list_pop_tests.c
 */


#include <cgreen/cgreen.h>
#include "new_list.h"
#include "list_push.h"
#include "list_pop.h"


#define INTKEY 1234
#define LISTLEN 13


Describe(list_pop);
BeforeEach(list_pop) {}
AfterEach(list_pop) {}


Ensure(list_pop, pops_new_node_properly)
{
  list_t list;
  new_list(&list);

  int i;

  listnode_t node[LISTLEN];

  for(i = 0; i < LISTLEN; i++){
    node[i].iKey = INTKEY * i;
    list_push(&list, &node[i]);
    assert_that(list.len, is_equal_to(i + 1));
    assert_that(list.head->iKey, is_equal_to(INTKEY * i));
  }

  i = LISTLEN - 1;
  listnode_t* node_p = NULL;

  do {
    node_p = list_pop(&list);
    assert_that(node_p->iKey, is_equal_to(INTKEY * i));
    assert_that(list.len, is_equal_to(i));

    i--;
  } while(node_p->next);
}
