#pragma once

typedef struct Heap_ {
  int size;
  int (*compare)(const void *key1, const void *key2);
  void (*destroy)(void *data);
  void **tree;
} Heap;

// Init the memory allocated for heap structure. Compare() function is used in
// order to compare nodes to one another. Should return 1 for key1 > key2, 0 for
// key1 == key2 , -1 for key1 < key2. Will generate top-heavy heap. destroy()
// deallocates dynamically allocated data.
void heap_init(Heap *heap, int (*compare)(const void *key1, const void *key2),
               void (*destroy)(void *data));

// Calls the destroy() function on all dynamically allocated data. Memsets
// the storage to 0. No other operations can be used on structure.
void heap_destroy(Heap *heap);

// inserts node wrapping the data pointer provided. Data pointer memory should be manually managed
// by the caller. 
int heap_insert(Heap *heap, const void *data);

// Extracts pointer from top of heap and rebalances it. Passes pointer back up to **data argument.
// Returns 0 if sucessful, -1 if failure. 
int heap_extract(Heap *heap, void **data);

#define heap_size(heap) ((heap)->size)
