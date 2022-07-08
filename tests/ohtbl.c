#include "ohtbl.h"
#include <stdio.h>
#include <stdlib.h>

int hash(const void *key) {
  int i;
  i = *(int *)key;
  return i;
}

int bash(const void *key) {
  int i;
  i = *(int *)key;
  return i;
}
int match(const void *key1, const void *key2) {
  return *(int *)key1 == *(int *)key2;
}

int main(void) {
  OHTbl *table = (OHTbl *)malloc(sizeof(OHTbl));
  ohtbl_init(table, 69, hash, bash, match, free);
  for (int i = 0; i < 68; i++) {
    int *data = (int *)malloc(sizeof(int));
    *data = i;
    ohtbl_insert(table, data);
  }

  int *data = (int *)malloc(sizeof(int));
  *data = 8;
  ohtbl_remove(table, (void *)&data);

  printf("Number of Elements: %d", ohtbl_size(table));

  ohtbl_destroy(table);
}
