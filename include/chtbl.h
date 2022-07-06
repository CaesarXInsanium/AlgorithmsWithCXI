#pragma once
#include "linked_list.h"
#include <stdlib.h>

typedef struct CHTbl_ {
  int buckets;
  int (*h)(const void *key);
  int (*match)(const void *key1, const void *key2);
  void (*destroy)(void *data);
  int size;
  List *table;
} CHTbl;

// initializing memory suggested by pointer. number of buckerts also is
// considered in the act of hasing values. h() function determines an user
// define hashing function. match() pointer will determine if the data are
// equal. destroy() is a custom function for deallocating the data that is being
// used. return 0 if successful. -1 not if not
int chtbl_init(CHTbl *htbl, int buckets, int (*h)(const void *key),
               int (*match)(const void *key1, const void *key2),
               void (*destroy)(void *data));

// will call the destroy function on all saved data and then deallocated it's
// own memory. return 0 if successful. -1 if not
void chtbl_destroy(CHTbl *htbl);

// will use the match() function for comparing and if so adds to internal array
// bucket. return 0 if sucessful and -1 if not
void chtbl_insert(CHTbl *htbl, const void *data);

// checks if data exists in buckets and if so removes it.
// return 0 if sucessful and -1 if not
int chtbl_remove(CHTbl *htbl, const void **data);

// checks if data exists in structure
// return boolean
int chtbl_lookup(const CHTbl *htbl, void **data);

// returns number of items in hash table
#define chtbl_size(htbl) ((htbl)->size)
