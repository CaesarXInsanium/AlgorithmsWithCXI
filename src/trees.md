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

## Binary Trees

Binary trees start at the *root* node. This node has 2 *children* and further *descendants*.
Descendants have *ancestors*. 

### Transversal Methods

To go brought a binary tree means to pointer hope down the descendants until a specific node is found.
This is done via the use of pointers. A binary tree can be thought of as recursive in nature since 
a tree has descendant tree data structures. Depending on what data one is looking for different strategies 
are required for going through tall the different nodes.

## Binary Search Trees


## Tree Balancing and Rotation

To balance a tree means to keep the distance from the root node to any descendants as short as 
possible while also keeping a current ordering. Tree balancing can be achieved by placing a counter on
the node struct that actually keeps track of the balance factor of the child nodes.
