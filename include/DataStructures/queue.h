#pragma once
#include "llist.h"
#include <stdlib.h>

typedef List Queue;

// prepares the memory allocated to store the initial pointers. Pass a function
// to destroy dynamically allocated memoery
#define queue_init list_init

// call destroy function on all data elements and deallocates the pointer of the
// Queue struct
#define queue_destroy list_destroy

// add data pointer to tail
int queue_enqueue(Queue *queue, const void *data);

// remove the head of the queue and return pointer to relevant data;
int queue_dequeue(Queue *queue, void **data);

// return pointer to data at head
#define queue_peek(queue) ((queue)->NULL ? NULL : (queue)->head->data)

// how many items in queue
#define queue_size list_size
