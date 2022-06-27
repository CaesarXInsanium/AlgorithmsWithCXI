#ifndef DLIST_H
#define DLIST_H

// each element in Doubly Link List
typedef struct DListElmt {
  void *data;
  struct DListElmt *prev;
  struct DListElmt *next;
} DListElmt;

// data structure contains everything neccesary to use a doubly linked list
typedef struct DList {
  int size;
  int (*match)(const void *key1, const void *key2);
  void (*destroy)(void *data);
  DListElmt *head;
  DListElmt *tail;
} DList;

// initializes memory at list pointer for usage as a linked list. Destroy
// function is for deallocating memory use by data
void dlist_init(DList *list, void (*destroy)(void *data));

// can only destroy a double linked list. No operations are thene permitted
void dlist_destroy(DList *list);

// add new item at head or after specified pointer. use NULL in *element to
// avoid errors.
int dlist_ins_next(DList *list, DListElmt *element, const void *data);

// add new item before specied pointer.
int dlist_ins_prev(DList *list, DListElmt *element, const void *data);

// takes *element pointer and deletes it from DList, fixing the other pointers
int dlist_remove(DList *list, DListElmt *element, void **data);

// number of elements in DList
int dlist_size(const DList *list);

// pointer to official beginning of list
#define dlist_head(list) ((list)->head);

// pointer to official end of list
#define dlist_tail(list) ((list)->tail)

// checks if provided pointer leads to the head
#define dlist_is_head(x) ((x)->prev == NULL ? 1 : 0)

// checks if if provided pointer is last
#define dlist_is_tail(x) ((x)->next == NULL ? 1 : 0)

// returns pointer to data stored
#define dlist_data(x) ((x)->data)

// returns pointer to next element specified by element
#define dlist_next(x) ((x)->next)

// returns pointer to previous element
DListElmt *dlist_prev(const DListElmt *element);
#define dlist_prev(x) ((x)->prev)
#endif
