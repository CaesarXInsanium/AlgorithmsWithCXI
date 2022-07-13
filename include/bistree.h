#pragma once
#include "bitree.h"

#define AVL_LFT_HEAVY 1
#define AVL_BALANCED 0
#define AVL_RHT_HEAVY -1

typedef struct AvlNode_ {
  void *data;
  int hidden;
  int factor;
} AvlNode;

typedef BiTree BisTree;

// Init the memory allocated for the BisTree struct. Provide an appropiate
// compare() function and a deallocation function for the dynamically allocated
// data.
void bistree_init(BisTree *tree,
                  int (*compare)(const void *key1, const void *key2),
                  void (*destroy)(void *data));

// Calls the custom deallocation function on all the elements in the tree.
// Deallocates struct memory and writes zeros.
void bistree_destroy(BisTree *tree);

// creates a new node with the data pointer and inserts it into the tree in the
// correct location. Uses the custom comparison function for determining. Call
// the rebalancing function. Returns 0 is success, -1 if failure.
int bistree_insert(BisTree *tree, const void *data);

// Use finds the node containing a matching data pointer and removes it.
// Automatically rebalances the binary search tree. Peforms lazy removal, where
// the node is marked as hidden.
int bistree_remove(BisTree *tree, const void *data);

// Uses comparison function in order to check if data is found in tree. If it is
// found, then **data is reset to the value stored in the node. Returns 0 is
// success, -1 if failure
int bistree_lookup(const BisTree *tree, const void **data);

// Returns number of items in tree
#define bistree_size bitree_size
