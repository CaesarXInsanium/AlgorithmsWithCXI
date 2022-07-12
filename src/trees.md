# Trees

Trees are data structures that has a root, and the root has child nodes. Each node can have
its own child nodes. Most trees in used are binary trees, which means that at most children that
any node can have is 2 children.

## Applications and Use cases

- Huffman coding: method of compressing data. Uses tree to assign codes to symbols in data
- User Interfaces: each widget and item in GUI may have parent and children widgets. Root has window
- Databases: require efficient sequential and random access reads and still performing insertions and deletions. B-tree is used for this
- Expression Processing: used in compilers and calculators in order to process arithmetic expressions. Generates a tree from which to evaluate things
- AI: rudimentary decision trees that contain choices for different actions that the AI can take.
- Event Schedulers: require decision tree in order to look up the current time and figure out which action to perform at which correct time
- priority queues: used in another data structure in order to determine which thing that computer has to process first.

### Expression Processing

An application of a binary tree is an *expression tree*, that contains operators and operands. 
An operand is final, but an operator can have child nodes that can be of either type. However, operands
have no such weaknesses. The magic of creating an expression tree is that transforming it back
into a string is easy as pi, and can be done into *prefix*, *postfix* and *infix* formats.
This is done by exploring the tree in different orders. 

Infix notation is easy to understand for humans but difficult to program. So prefix and post fix 
notation are generally a much better choice. 

Postfix notation can be evaluated with an abstract stack machine. We can take an infix notation expression
and transform it into postfix which is then evaluated into postfix. Which is evaluated with the 
aforementioned data structure.

## Binary Trees

Binary trees start at the *root* node. This node has 2 *children* and further *descendants*.
Descendants have *ancestors*. 

### Transversal Methods

To go brought a binary tree means to pointer hope down the descendants until a specific node is found.
This is done via the use of pointers. A binary tree can be thought of as recursive in nature since 
a tree has descendant tree data structures. Depending on what data one is looking for different strategies 
are required for going through tall the different nodes.

Preorder transversal is done by going to root and adding data to stack. Then recursively call itself on 
the left child if it is having own. Then call itself on the right side.
In simpler terms it is going down from root, left to right.

Inorder transversal is done by taking each single node as the root of a subtree. If it has children, 
start from the left size and check if that is a subtree. If not then add itself to stack. After wards 
check the right side.
In simpler terms this function calls itself until it reaches left most end of the tree. Then it
adds the relevant data to the stack. Go up one, add data and then go down to right. And then reevaluate
the function call stack.

Postorder transversal is done by checking left and right subtrees first. Then adding relevant data to stack.


## Binary Search Trees

This type of tree is used in occasions when a normal tree is simply not worth it. This is a tree that is 
self-balancing. With each insertion it is compared with the root. If the item is greater than the root,
then it recuses and check again with the right side. It goes to the left side if it is less than.
Duplicate keys are not allowed and after each insertion if the tree becomes unbalanced, then it 
is automatically rebalanced in order to keep optimal insertions and searches. If a tree is not kept properly
balanced then its efficiency goes from O(logn) to O(n)

## Tree Balancing

To balance a tree means to keep the distance from the root node to any descendants as short as 
possible while also keeping a current ordering. Tree balancing can be achieved by placing a counter on
the node struct that actually keeps track of the balance factor of the child nodes.

There are two main methods of keeping a tree balanced. One AVL method where the information for keeping 
the tree balanced is calculated upon insertion and deletion and used in order to actually perform the
balancing. The information is the balance factor which is just the balance factor left child nodes 
minus the balance factor of right child nodes. If the balance factor exceeds an absolute value of
one then the auto-balancing kicks in and the tree is balanced.

## Rotation

Balancing is done via to rotations. The start with the node that is unbalanced and rearrange then in 
order to maintain the relationships valid in regard to the comparison function. There are four types 
of rotations. Left-left, left-right, right-right, right-left.

### Left-left && Right-right

Imagine a double extended binary tree like this. Here node0 is serving as the root. We can assume that in comparison function is working properly. And the node are in correct order.


```
node0 -> node1 -> node2
```

A RR rotation would change it to look like this

```
   node1 
  /    \
node0   node2
```

### Left-right && Right-left

This is just a more complicated version of the RR and LL rotations. But it is a bit more complicated than 
that and has to keep in mind a lot more things to keep in consideration.
