#include <stdio.h>
#include <stdlib.h>
#include "include/dlist.h"

int main(void){
  DList *list = (DList *)malloc(sizeof(DList));
  dlist_init(list, free);

  int control[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  // build out the list
  for (int i = 0; i < 10; i++) {
    int *data = (int *)malloc(sizeof(int));
    *data = i;
    dlist_ins_next(list, NULL, data);
  }

  for (int i = 0; i < 10; i++) {
  }
  dlist_destroy(list);
}
