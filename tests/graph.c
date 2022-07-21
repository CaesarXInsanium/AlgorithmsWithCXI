#include "graph.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


int printint(void *i) {
  printf("Value:\t%d\n", *(int *)i);
  return 0;
}
int cmp(const void *key1, const void *key2) {
  return *(int *)key1 = *(int *)key2;
}

int main(void){
  Graph *graph = (Graph *)malloc(sizeof(Graph));
  graph_init(graph,cmp, free );
}
