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

// Peforms Merge sort. Will allocate memory for copy of data
// provided. Comparison() function is required.
// Number of elements is size, Size of each element is esize.
// Int i and k are bouding indexes to keep track of cursors.
// Returns 0  if sorting is sucessful and -1 otherwise
int mgsort(void *data, int size, int esize, int i, int k,
           int (*compare)(const void *key1, const void *key2));

// int *data is buffer of integers.
// int size is number of individual elements.
// int k is maximum value existing in array.
// Returns 0 if succesful and -1 otherwise.
int ctsort(int *data, int size, int k);

// Peforms radix sort on array of integers *data.
// Will sort in placce.
// Size if number of elements, p denotes number of digit positions.
// int k denotes radix.
// Returns 0 if succesful, -1 otherwise
int rxsort(int *data, int size, int p, int k);
