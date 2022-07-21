#pragma once
#include "heap.h"

// Basically, a priority queue can be implemented using a heap
typedef Heap PHeap;

// #define heap_init
#define pqueue_init heap_init

// #define heap_destroy
#define pqueue_destroy heap_destroy

// #define heap_insert
#define pqueue_insert heap_insert

// #define heap_extract
#define pqueue_extract heap_extract

// returns pointer to data in head of queue
#define pqueue_peek(pqueue) ((pqueue)->tree == NULL ? NULL : (pqueue)->tree[0])

#define pqueue_size heap_size
