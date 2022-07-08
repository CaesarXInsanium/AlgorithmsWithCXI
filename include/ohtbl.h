#pragma once

#include "llist.h"

// thanks to the very nature of hash tables, all of the operations except for the destroy function are
// O(1), constant time.
typedef struct OHTbl_ {
  int positions;
  void *vacated;
  int (*h1)(const void *key);
  int (*h2)(const void *key);
  int (*match)(const void *key1, const void *key2);
  void (*destroy)(void *data);
  int size;
  void **table;
} OHTbl;

// initializing memory suggested by pointer. number of buckerts also is
// considered in the act of hasing values. h#() functions determines an user
// defined hashing functions. match() pointer will determine if the data are
// equal. destroy() is a custom function for deallocating the data that is being
// used. return 0 if successful. -1 not if not
int ohtbl_init(OHTbl *htbl, int positions, int (*h1)(const void *key),
               int (*h2)(const void *key),
               int (*match)(const void *key1, const void *key2),
               void (*destroy)(void *data));

// will call the destroy function on all saved data and then deallocated it's
// own memory. return 0 . -1 if not. 
void ohtbl_destroy(OHTbl *htbl);

// will use the match() function for comparing and if so adds to internal array
// bucket. return 0 if dat aalread exists and -1 if not
int ohtbl_insert(OHTbl *htbl, const void *data);

// checks if data exists in buckets and if so removes it.
// return 0 if successful and -1 if not. 
int ohtbl_remove(OHTbl *htbl, const void **data);

// checks if data exists in structure
// return boolean
int ohtbl_lookup(const OHTbl *htbl, void **data);

// returns number of items in hash table
#define ohtbl_size(htbl) ((htbl)->size)
