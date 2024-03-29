#include "DataStructures/clist.h"
#include <stdlib.h>
#include <string.h>

void clist_init(CList *clist, void (*destroy)(void *data)) {
  clist->size = 0;
  clist->match = NULL;
  clist->destroy = destroy;
  clist->head = NULL;
}

void clist_destroy(CList *list) {
  void *data;
  while (clist_size(list) > 0) {
    if (clist_rem_next(list, list->head, (void **)&data) == 0 &&
        list->destroy != NULL) {
      list->destroy(data);
    }
  }

  memset(list, 0, sizeof(CList));

  return;
}
int clist_ins_next(CList *list, CListElmt *element, const void *data) {
  CListElmt *new_element;

  if ((new_element = (CListElmt *)malloc(sizeof(CListElmt))) == NULL) {
    return -1;
  }

  new_element->data = (void *)data;
  if (clist_size(list) == 0) {
    new_element->next = new_element;
    list->head = new_element;
  } else if (element == NULL) {
    CListElmt *oldhead = clist_head(list);
    list->head = new_element;
    new_element->next = oldhead;
  } else {
    new_element->next = element->next;
    element->next = new_element;
  }

  list->size++;

  return 0;
}

int clist_rem_next(CList *list, CListElmt *element, void **data) {
  CListElmt *old_element;
  if (clist_size(list) == 0)
    return -1;

  *data = element->next->data;

  if (element->next == element) {
    old_element = element->next;
    list->head = NULL;
  } else {
    old_element = element->next;
    element->next = element->next->next;
    if (old_element == clist_head(list))
      list->head = old_element->next;
  }

  free(old_element);
  list->size--;
  return 0;
}

int clist_size(const CList *clist) { return clist->size; }

int clist_map_loop(CList *list, int map(void *data), int *result) {
  CListElmt *head = clist_head(list);
  map(head);
  CListElmt *current = head;

  while (current != head) {
    *result = map(current->data);
    if (*result == -1) {
      return -1;
    }
    current = current->next;
  }
  return 0;
}
