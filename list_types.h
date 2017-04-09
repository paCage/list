#ifndef _LIST_TYPES_H_
#define _LIST_TYPES_H_


typedef struct _listnode_t
{
  struct _listnode_t *next;
  union
  {
    int iKey;
    float fKey;
    double dKey;
  };
  void *data;
} listnode_t;


typedef struct _list_t
{
  struct _listnode_t *head;
  int len;
} list_t;


#endif /* _LIST_TYPES_H_ */
