#include "set.h"
#include <stdlib.h>

int isequal(const void *a, const void *b){
  return *(int *)a == *(int *)b;
}
int main(void){
  Set *set = (Set *)malloc(sizeof(Set));
  set_init(set, isequal, free);
}
