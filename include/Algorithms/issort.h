#pragma once

// Peforms insertion sort. must provide comparison function.
// size is size of bufffer, esize is size of individual items, in bytes.
// for descending sorting, comparison()
// Must return 1 if key1 > key2, 0 if key1 == key2, -1 if key1 < key2.
// For ascending sorting opposite must be true.
// returns 0 if sorting is successful, -1 otherwise.
int issort(void *data, int size, int esize,
           int (*compare)(const void *key1, const void *key2));
