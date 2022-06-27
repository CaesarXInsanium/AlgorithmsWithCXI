#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  Stack *stack = (Stack *)malloc(sizeof(Stack));
  stack_init(stack, free);

  // for comparison
  int control[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  // build out the list
  for (int i = 0; i < 10; i++) {
    int *data = (int *)malloc(sizeof(int));
    *data = i;
    stack_push(stack, data);
  }
  for (int i = 0; i < 10; i++) {
    void *data = NULL;
    stack_pop(stack, &data);
    printf("Data:\t%d\t, Control:\t%d\n", *(int *)data, control[9 - i]);
  }

  stack_destroy(stack);
}
