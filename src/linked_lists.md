# Linked Lists

this is literally just a chain of elements linked together only by pointers to the next element.
They are only better at insertions and deletions but everything else sucks.

I think that after some implementations that it is simple a matter of fact of keeping your data and pointer straight

## Definition

Single node in a linked list contains pointer to the data that such pointer owns and a pointer to the next element in the list. In order access any element in the list, it must be traversed in its entirety trought each element. Trought such problem can be mitigated. Each element is allocated dynamically. ## Singly Linked List

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

## Mailing List

## Scrolled Lists

## Polynomials

## Memory Management

## LISP

## Linked Location of Files

## Other Data Strucutures


