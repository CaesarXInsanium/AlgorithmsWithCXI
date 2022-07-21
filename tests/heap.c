#include "DataStructures/heap.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *k1, const void *k2) {
  if (*(int *)k1 > *(int *)k2) {
    return 1;
  } else if (*(int *)k1 == *(int *)k2) {
    return 0;

  } else {
    return -1;
  }
}

int main(void) {
  Heap *heap = (Heap *)malloc(sizeof(Heap));

  heap_init(heap, cmp, free);

  for (int i = 0; i < 10; i++) {
    int *k = (int *)malloc(sizeof(int));
    *k = i;
    heap_insert(heap, (void *)k);
  }
  void *p = NULL;
  heap_extract(heap, &p);
  printf("Value:\t%d\n", *(int *)p);

  heap_destroy(heap);
}
