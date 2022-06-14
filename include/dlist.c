#include "dlist.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void dlist_init(DList *list, void (*destroy)(void *data)){
  list->size = 0;
  list->destroy=destroy;
  list->head=NULL;
  list->tail=NULL;
  return;
}

void dlist_destroy(DList *list){
  void *data;
  while (dlist_size(list) > 0){
    if (dlist_remove(list, dlist_tail(list), (void **)&data) == 0 && list->destroy != NULL){
      list->destroy(data);
    }
  }
  memset(list, 0, sizeof(DList));
}


