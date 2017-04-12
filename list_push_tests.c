/*
 * list_push_tests.c
 */


#include <cgreen/cgreen.h>
#include "new_list.h"
#include "list_push.h"


#define INTKEY 1234
#define LISTLEN 13


Describe(list_push);
BeforeEach(list_push) {}
AfterEach(list_push) {}


Ensure(list_push, pushs_new_node_properly)
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
  listnode_t* node_p = list.head;

  while(node_p->next){
    assert_that(node_p->iKey, is_equal_to(INTKEY * i--));
    node_p = node_p->next;
  }
}
