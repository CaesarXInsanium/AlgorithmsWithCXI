#pragma once
#include <stdlib.h>

// Node struct of BiTree. Contains tree pointers, left, right, data
typedef struct BiTreenode_ {
  void *data;
  struct BiTreenode_ *left;
  struct BiTreenode_ *right;
} BiTreeNode;

// Binary Tree, contains size, comparision function, destroy() function
// and the pointer to the root node.
typedef struct BiTree_ {
  int size;
  int (*compare)(const void *key1, const void *key2);
  void (*destroy)(void *data);
  BiTreeNode *root;
} BiTree;

// Initializes the memory, to be used. destroy() must deallocate the memory used by the data
void bitree_init(BiTree *tree, void (*destroy)(void *data));

// Call the destroy function on the data. Deletes all data on all memory allocated by malloc
void bitree_destroy(BiTree *tree);

// Take node and adds a new child node on left. Will do so the provided tree data strucutre
// If node is NULL, then data is placed into new root node.
// Will return 0 if sucessful, -1 otherwise
int bitree_ins_left(BiTree *tree, BiTreeNode *node, const void *data);

// Take node and adds a new child node on right. Will do so the provided tree data strucutre
// If node is NULL, then data is placed into new root node.
// Will return 0 if sucessful, -1 otherwise
int bitree_ins_right(BiTree *tree, BiTreeNode *node, const void *data);

// Take node and removes child node on right. Will do so the provided tree data strucutre
// If node is NULL, left side of tree is remove.
// Will return 0 if sucessful, -1 otherwise
int bitree_rem_left(BiTree *tree, BiTreeNode *node, const void *data);

// Take node and removes child node on right. Will do so the provided tree data strucutre
// If node is NULL, right side of tree is remove.
// Will return 0 if sucessful, -1 otherwise
int bitree_rem_right(BiTree *tree, BiTreeNode *node, const void *data);

// First argument is the main target tree. Will join the left and right trees into one
// big tree.
// Will return 0 if sucessful, -1 otherwise
int bitree_merge(BiTree *tree, BiTree *left, BiTree *right, const void *data);

#define bitree_size(tree) ((tree)->size)

#define bitree_root(tree) ((tree)->root)

// marks if node is at end of branch in binary tree
#define bitree_is_eob(node) ((node) == NULL)

#define bitree_is_leaf(node) ((node)->left == NULL && (node)->right == NULL)

#define bitree_data(node) ((node)->data)

// returns pointer to left node
#define bitree_left(node) ((node)->left)

// returns pointer to right node
#define bitree_right(node) ((node)->right)
