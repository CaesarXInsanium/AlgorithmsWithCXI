#include <stdio.h>
#include <stdlib.h>
#include "include/dlist.h"

int main(void){
  DList *list = (DList *)malloc(sizeof(DList));
  dlist_init(list, free);

  dlist_destroy(list);
}
