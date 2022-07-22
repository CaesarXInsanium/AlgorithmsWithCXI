#pragma once

// Peforms insertion sort. must provide comparison function.
// size is size of bufffer, esize is size of individual items, in bytes.
// for descending sorting, comparison()
// Must return 1 if key1 > key2, 0 if key1 == key2, -1 if key1 < key2.
// For ascending sorting opposite must be true.
// returns 0 if sorting is successful, -1 otherwise.
int issort(void *data, int size, int esize,
           int (*compare)(const void *key1, const void *key2));

// Peforms quicksort. must provide comparison function.
// size is size of bufffer, esize is size of items, in bytes.
// int i,k denote the upper and lower boundaries,
// i = 0, k = array_size-1.
// for descending sorting, comparison()
// Must return 1 if key1 > key2, 0 if key1 == key2,
// -1 if key1 < key2.
// For ascending sorting opposite must be true.
// returns 0 if sorting is successful, -1 otherwise. Data is passed to void
// *data
int qksort(void *data, int size, int esize, int i, int k,
           int (*compare)(const void *key1, const void *key2));
