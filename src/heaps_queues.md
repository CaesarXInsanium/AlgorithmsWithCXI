# Heaps and Priority Queues

There is usually a problem case in which one is supposed to be able to quickly determine the
largest/smallest item in data structure that undergoes frequent insertions and deletions.
One method if constant sorting, another is a priority queue.

## Heaps

A heap is an array of values that are organized in a binary tree like structure. The root node
is always the largest/smallest item in the structure. As a heap grows, values are added left to right.
Best way to implement at a binary heap is using a continuous memory array. Due to some mathematical
properties, parents and children of nodes can be found using some fun equations

```c
// where i is index of node

//parent
p = (i - 1)/2; // integer division

// right child
rc = 2 * i + 1

// left child
lc = 2 * i + 2
```


## Priority Queues

A priority queue functions similarly to a normal queue but instead of having first in first out, 
the first item that gets removed is the largest/smallest item. They can be used in occasions in which 
data with the highest importance gets served first, such as server load balancing.
Priority queues have much of the same interface as a normal queue.

## Sorting: Heap sort

## Applications

Some applications of the heap data structure are 

- Sorting: heaps do maintain some form of order to the data contained in theme
- task scheduling: CPU algorithms for determining which process to continue processing next.
- Parcel sorting: determining which packages need to be delivered first based on delivery priority printed in labels
- Huffman config: data compression method that assigns codes to repeating symbols in data.
- Load balancing: where servers need to find a method for equally distributing requests

## Further facts

- There is a more efficient method of building out a heap by simply pushing all data at once and then beginning the process of beatifying the tree by going backwards from the leaf all the way to the root
- arrays are better than linked lists as the backing storage for heap because in heaps data is left leaning meaning that leaf nodes are filled more quickly than high leaf nodes. Here it allows for all the storage spots in the array to be filled with no gaps.
- If marking too many processes as high priority, the computer begins to slow down and tripping over itself trying to do everything. Sometimes some process are time sensitive and when they need to be given CPU time they are not given. Also, some time when there is a majority high priority processes, they always come up in the queue and the low priority ones don't get CPU time
  - this can be fixed by increasing priority of process the longer that they have to wait in the queue, so they don't get starved for CPU cycles. 
