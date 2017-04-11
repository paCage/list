#ifndef _LIST_TRAVERSE_H_
#define _LIST_TRAVERSE_H_


#include "./list_types.h"


void list_traverse(list_t*, void (*func)(listnode_t*, void*), void*);


#endif /* _LIST_TRAVERSE_H_ */
