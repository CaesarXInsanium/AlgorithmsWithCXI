# Linked Lists

This is literally just a chain of elements linked together only by pointers to the next element.
They are only better at insertions and deletions but everything else sucks.

I think that after some implementations that it is simple a matter of fact of keeping your data and pointer straight

## Definition

Single node in a linked list contains pointer to the data that such pointer owns and a pointer to the next element in the list. In order access any element in the list, it must be traversed in its entirety trough teach element. Trought such problem can be mitigated. Each element is allocated dynamically. ## Singly Linked List

### Management Example: Frames

- linked list is often used in virtual memory when programs use more memory than what is actually available
- virtual addresses are used, page table is used to map pages of virtual memory to frames of physical memoery
- `page fault` occurs when virtual address is not assigned physical memory
- linked list is optical since insertions and deletions are commonplace

```c
int alloc_frame(void); //will find a free frame and takes for usage
int free_frame(void); //undoes previos function
```

## Doubly Linked List

each element in doubly linked list contains pointers to previous and next elements in the linked list.
Head and tail items in linked list have NULL points on the corresponding sections. Allows for backwards traversal in a list.


## Circular List

Circular list has no tail, only a head. 'last' element pointer actualy points to the head. once traversal to the end of such list is reached
then the pointers just lead back to the head again.

Circular list is merely is a somewhat modified singular linked list

### Example

Like how Linked list is used in order to manage frame allocation, circular linked list is excellent for managing swap space. A *clock* algorithm
is used in order to which block of memory to swap between physical memory and swap disk
Swap space is used in cases in which physical RAM is not enough to handle the data used by running applications and their is a sufficiently fast disk available. Block of memory are written to disk
in a last used manner. The application that is the least used is the one that is sent to swap space.
An algorithm is used to check which application is used least or not used at all. Kernel marks numbers on them and once they reach a certain threshhold they are automaticallty sent to swap.

### Other Examples Of Using Linked Lists

- Mailing List
- Scrolled Lists
- Polynomials
- Memory Management
- LISP
- Linked Location of Files

##  Other Facts

- Sole advantage of like list over arrays is when quick insertion and deletion are needed
  - array however have easy access anywhere in the data structure. Linked lists must contend with looping through all elements in order to find one in particular
  - array are useful when storage is limited
- take a good look at the comparisons between perfoance in the different data structures

