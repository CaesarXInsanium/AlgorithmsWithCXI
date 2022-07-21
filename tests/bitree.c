#include "DataStructures/bitree.h"
#include "DataStructures/llist.h"
#include "DataStructures/transverse.h"
#include <stdio.h>
#include <stdlib.h>

int printint(void *i) {
  printf("Value:\t%d", *(int *)i);
  return 0;
}
int main(void) {
  BiTree *tree = (BiTree *)malloc(sizeof(BiTree));
  bitree_init(tree, free);

  for (int i = 0; i < 100; i++) {
    int *n = (int *)malloc(sizeof(int));
    int *k = (int *)malloc(sizeof(int));
    *n = i;
    *k = i + i;
    bitree_ins_right(tree, NULL, (void *)n);
    bitree_ins_left(tree, NULL, (void *)k);
  }

  List *results = (List *)malloc(sizeof(List));
  list_init(results, free);
  postorder(bitree_root(tree), results);

  int r = 0;
  list_map_loop(results, printint, &r);

  bitree_destroy(tree);
}
