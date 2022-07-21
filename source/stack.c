
#include <stdlib.h>
#include "DataStructures/llist.h"
#include "DataStructures/stack.h"


int stack_push(Stack *stack, const void *data){
  return list_ins_next(stack, NULL, data);
}

int stack_pop(Stack *stack, void **data){
  return list_rem_next(stack, NULL, data);
}


