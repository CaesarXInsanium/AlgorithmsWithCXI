#ifndef LINKED_LIST_H
#define LINKED_LIST_H
// individual node
typedef struct ListElmt {
  void *data;
  struct ListElmt *next;
} ListElmt;
typedef struct List {
  int size;
  int (*match)(const void *key1, const void *key2);
  void (*destroy)(void *data);
  ListElmt *head;
  ListElmt *tail;
} List;

// This function must be called in order to be able to use and apply other
// operations data structure. Destroy function is used to handle dynamically
// allocated elements. Generally free() Will create data structure but with not
// elements. head and tail are NULL
void list_init(List *list, void (*destroy)(void *data));

// Goes trough each element and calls the list_rem_next on each element. Uses
// destruction function.
void list_destroy(List *list);

// Inserts new data at specified location. Updates size counter. Resets tail
// and head point when appropiate. Int denotes success value
int list_ins_next(List *list, ListElmt *element, const void *data);

// Removes element after selected element pointer. Passes deleted element
// pointer to parameter data. Int denotes success value
int list_rem_next(List *list, ListElmt *element, void **data);

// Returns number of elements in list
int list_size(const List *list);

// returns point to head of linked list
#define list_head(list) ((list)->head)

// returns last element in list
#define list_tail(list) ((list)->head)

// checks if pointer is to head to list
#define list_is_head(list, element) ((element) == (list)->head ? 1 : 0)

// checks if point is to tail of list
#define list_is_tail(list, element) ((element)->next == NULL ? 1 : 0)

// returns pointer to data stored in element
#define list_data(element) ((element)->data)

// returns pointer to next elements
#define list_next(element) ((element)->next)
#endif
