#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"

void list_init(List *list, void (*destroy)(void *data)){

}

// This is the main function
int main(void){
  List *list = malloc(sizeof(List));
  free(list);
  puts("Hello World");
  return 0;
}

