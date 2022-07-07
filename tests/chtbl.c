#include "chtbl.h"
#include <stdio.h>
#include <stdlib.h>

int hash(const void *key) {
  int i;
  i = *(int *)key;
  return i;
}
int match(const void *key1, const void *key2) {
  return *(int *)key1 == *(int *)key2;
}

int main(void) {
  CHTbl *table = (CHTbl *)malloc(sizeof(CHTbl));
  chtbl_init(table, 69, hash, match, free);
  for (int i = 0; i < 68; i++) {
    int *data = (int *)malloc(sizeof(int));
    *data = i;
    chtbl_insert(table, data);
  }

  int *data = (int *)malloc(sizeof(int));
  *data = 8;
  chtbl_remove(table, (void *)&data);

  printf("Number of Elements: %d", chtbl_size(table));

  chtbl_destroy(table);
}
