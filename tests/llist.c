#include "linked_list.h"
#include <assert.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  List *list = (List *)malloc(sizeof(List));
  list_init(list, free);

  // for comparison
  int control[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  // build out the list
  for (int i = 0; i < 10; i++) {
    int *data = (int *)malloc(sizeof(int));
    *data = i;
    list_ins_next(list, NULL, data);
  }

  int size = list_size(list);
  printf("List Size:\t%d\n", size);
  assert(size == 10);

  int head = *(int *)list_head(list)->data;
  printf("head: %d", head);
  assert( head== control[9]);

  void *pointer = NULL;
  list_rem_next(list, NULL, &pointer);

  int tail = *(int *)list_tail(list)->data;
  printf("tail: %d", tail);
  assert( tail== control[0]);

  for (int i = 0; i < 10; i++) {
  }
  list_destroy(list);
  return 0;
}
