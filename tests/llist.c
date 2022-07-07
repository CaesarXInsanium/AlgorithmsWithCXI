#include "llist.h"
#include <assert.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

// sample function that is applied on all elements
int printint(void *data) {
  printf("Number:\t%d\n", *(int *)data);
  return 0;
}
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

  // checking correct size
  int size = list_size(list);
  printf("List Size:\t%d\n", size);
  assert(size == 10);

  // head is the last element that was inserted
  int head = *(int *)list_head(list)->data;
  printf("head: %d", head);
  assert(head == control[9]);

  // retrieving and comparing head
  ListElmt *helm = list_head(list);
  assert(list_is_head(list, helm));

  // insert element in a specifc location
  int *k1 = (int *)malloc(sizeof(int));
  *k1 = 69;
  list_ins_next(list, helm->next, (void *)k1);

  // be sure of size
  assert(size == 10);

  // remove random element
  void *k2 = NULL;
  list_rem_next(list, NULL, &k2);

  void *pointer = NULL;
  list_rem_next(list, NULL, &pointer);

  // check out tail
  int tail = *(int *)list_tail(list)->data;
  printf("tail: %d", tail);
  assert(tail == control[0]);

  assert(list_size(list) == 9);

  int *n = (int *)malloc(sizeof(int));
  list_map_loop(list, printint, n);
  list_destroy(list);
  return 0;
}
