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

// we must be able to pass a function that is capable of freeing the relewant
// memory, generally free(). will create data structure but with not elements. head and tail are NULL
void list_init(List *list, void (*destroy)(void *data));

// goes trough each element and calls the appropiate destruction function
void list_destroy(List *list);

// inserts new data at specified location
int list_ins_next(List *list, ListElmt *element, const void *data);

// removes element from specified location
int list_rem_next(List *list, ListElmt *element, void **data);

// returns number of elements in list
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
