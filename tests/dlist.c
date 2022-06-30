#include "include/dlist.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  DList *list = (DList *)malloc(sizeof(DList));
  dlist_init(list, free);


  // build out the list
  for (int i = 0; i < 10; i++) {
    int *data = (int *)malloc(sizeof(int));
    *data = i;
    dlist_ins_next(list, NULL, data);
  }

  dlist_destroy(list);
}
