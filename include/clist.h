#ifndef CLIST_H
#define CLIST_H

// individual node
typedef struct CListElmt {
  void *data;
  struct CListElmt *next;
} CListElmt;

// Contain size of clist, comparison function and destructor function
// Contains pointer to head and tail
typedef struct CList {
  int size;
  int (*match)(const void *key1, const void *key2);
  void (*destroy)(void *data);
  CListElmt *head;
} CList;

// must be called before circular linked list can be used.
// prepares allocated memory to be used as a circular linked list
void clist_init(CList *list, void (*destroy)(void *data));

// deallocates all memory and uses the custom 'destroy' function passed to
// the structure
void clist_destroy(CList *list);

// Inserts new data at specified location.
// If element is NULL, places data at head
// return value denotes success
int clist_ins_next(CList *list, CListElmt *element, const void *data);

// Removes element after selected element pointer.
// If element is null, head will be removed.
// Passes deleted data pointer to data.
// which must be of type
// (void **).
// Int denotes success value
int clist_rem_next(CList *clist, CListElmt *element, void **data);

// Returns number of elements in clist
int clist_size(const CList *clist);

// Loops trough clist and applies function on each of elements
// please make sure that map function is safe to use with data
// use result pointer for returning  positive values or success
// int denotes success
int clist_map_loop(CList *clist, int map(void *data), int *result);

// key is value for comparison and result is
// CListElmt where the data is contained
// MUST KNOW SIZE of relevant data
//int clist_search(CList *clist, void *key, CListElmt *result);

// returns point to head of linked clist
#define clist_head(clist) ((clist)->head)

// returns pointer to data stored in element
#define clist_data(element) ((element)->data)

// returns pointer to next element
#define clist_next(element) ((element)->next)

#endif
