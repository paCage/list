/*
 * new_list_tests.c
 */


#include <cgreen/cgreen.h>
#include "new_list.h"


Describe(new_list);
BeforeEach(new_list) {}
AfterEach(new_list) {}


Ensure(new_list, constructor_works_properly)
{
  list_t list;
  new_list(&list);

  assert_that(list.head, is_null);
  assert_that(list.len, is_equal_to(0));
}
