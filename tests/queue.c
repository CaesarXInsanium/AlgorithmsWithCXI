#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  Queue *queue = (Queue *)malloc(sizeof(Queue));
  queue_init(queue, free);

  int control[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  // build out the list
  for (int i = 0; i < 10; i++) {
    int *data = (int *)malloc(sizeof(int));
    *data = i;
    queue_enqueue(queue, data);
  }

  for (int i = 0; i < 5; i++) {
    void *data = NULL;
    queue_dequeue(queue, &data);
    printf("Data:\t%d\t, Control:\t%d\n", *(int *)data, control[i]);
  }
  queue_destroy(queue);
}
