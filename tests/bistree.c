#include "DataStructures/bistree.h"
#include "DataStructures/llist.h"
#include "DataStructures/transverse.h"
#include <stdio.h>
#include <stdlib.h>

int printint(void *i) {
  printf("Value:\t%d\n", *(int *)i);
  return 0;
}
int cmp(const void *key1, const void *key2) {
  return *(int *)key1 = *(int *)key2;
}

int main(void) {
  puts(" ");
  BisTree *tree = (BisTree *)malloc(sizeof(BisTree));
  bistree_init(tree, cmp, free);
  for (int i = 0; i < 100; i++) {
    int *n = (int *)malloc(sizeof(int));
    *n = i;
    bistree_insert(tree, (void *)n);
  }

  List *results = (List *)malloc(sizeof(List));
  list_init(results, free);
  postorder(bitree_root(tree), results);

  int r = 0;
  list_map_loop(results, printint, &r);

  bistree_destroy(tree);
}
