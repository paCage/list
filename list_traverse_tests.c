/*
 * list_traverse_tests.c
 */


#include <cgreen/cgreen.h>
#include "new_list.h"
#include "list_add.h"
#include "list_traverse.h"


static void add(listnode_t*, void*);
static void check_new_key(listnode_t*, void*);


#define INTKEY 1234
#define NEWKEY 4321
#define LISTLEN 13


Describe(list_traverse);
BeforeEach(list_traverse) {}
AfterEach(list_traverse) {}


Ensure(list_traverse, passes_all_node)
{
  list_t list;
  new_list(&list);

  int i, total = 0;

  listnode_t nodes[LISTLEN];

  for(i = 0; i < LISTLEN; i++){
    nodes[i].iKey = INTKEY;
    list_add(&list, &nodes[i]);
  }

  list_traverse(&list, add, &total);

  assert_that(total, is_equal_to(LISTLEN * INTKEY));

  list_traverse(&list, check_new_key, NULL);
}


static void add(listnode_t* node, void* data)
{
  *(int*)data += node->iKey;
  node->iKey = NEWKEY;
}


static void check_new_key(listnode_t* node, void* data)
{
  assert_that(node->iKey, is_equal_to(NEWKEY));
}
