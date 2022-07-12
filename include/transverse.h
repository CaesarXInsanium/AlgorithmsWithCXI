#pragma once
#include "bitree.h"
#include "llist.h"

int preorder(const BiTreeNode *node, List *list);
int inorder(const BiTreeNode *node, List *list);
int postorder(const BiTreeNode *node, List *list);
