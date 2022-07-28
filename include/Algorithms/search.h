#pragma once

// Uses compare() function to peform binary search over sorted data.
// Data buffer must be in sorted order or might not work.
// int size denotes number of elements, int esize is size of each 
// element in bytes. 
// Compare() function returns 1 if key1 > key2, 0 if key1 == key2, -1 if key1 < key2.
// Returns index of target if found, -1 otherwise.
int bisearch(void *sorted, void *target, int size, int esize,
             int (*compare)(const void *key1, const void *key2));
