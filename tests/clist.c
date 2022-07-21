#include "DataStructures/clist.h"
#include <stdlib.h>

int main(void){
  CList *list = (CList *)malloc(sizeof(CList));
  clist_init(list, free);

  for (int i = 0; i < 10; i++) {
    int *data = (int *)malloc(sizeof(int));
    *data = i;
    clist_ins_next(list, NULL, (void *)data);
  }


  // TODO: find that in the actual fuck is wrong and fix
  // clist_destroy(list);
}
