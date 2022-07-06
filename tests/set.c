#include "set.h"
#include <stdlib.h>

int isequal(const void *a, const void *b) { return *(int *)a == *(int *)b; }
int main(void) {
  Set *seta = (Set *)malloc(sizeof(Set));
  Set *setb = (Set *)malloc(sizeof(Set));
  Set *setc = (Set *)malloc(sizeof(Set));
  Set *setd = (Set *)malloc(sizeof(Set));
  set_init(seta, isequal, free);
  set_init(setb, isequal, free);
  set_init(setc, isequal, free);

  for (int i = 0; i < 20; i++) {
    int *j = (int *)malloc(sizeof(int));
    int *k = (int *)malloc(sizeof(int)); 
    *k = rand();
    *j = i;
    set_insert(seta, (void *)k);
    set_insert(setb, (void *)j);
  }
  for (int i = 0; i < 40; i++) {
    int *j = (int *)malloc(sizeof(int));
    set_insert(setc, j);
  }

  set_union(setd, seta, setb);

  set_destroy(seta);
  set_destroy(setb);
}
