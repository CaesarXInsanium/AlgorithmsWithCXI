#ifndef LINKED_LIST_H
#define LINKED_LIST_H
// individual node
typedef struct ListElmt {
  void *data;
  struct ListElmt *next;
} ListElmt;
// Contain size of list, comparison function and destructor function
// Contains pointer to head and tail
typedef struct List {
  int size;
  int (*match)(const void *key1, const void *key2);
  void (*destroy)(void *data);
  ListElmt *head;
  ListElmt *tail;
} List;

// This function must be called in order to be able to use and apply other
// operations data structure.
// Destroy function is used to handle DYNAMICALLY allocated elements and DATA.
// Generally free() Will create data structure but with not elements. head and
// tail are NULL
void list_init(List *list, void (*destroy)(void *data));

// Goes trough each element and calls the list_rem_next on each element. Uses
// destruction function.
void list_destroy(List *list);

// Inserts new data at specified location.
// If element is NULL, places data at head
// Updates size counter. Resets tail and head point when appropiate.
// return value denotes success
int list_ins_next(List *list, ListElmt *element, const void *data);

// Removes element after selected element pointer.
// If element is null, head will be removed.
// Passes deleted data pointer to data.
// which must be of type
// (void **).
// Int denotes success value
int list_rem_next(List *list, ListElmt *element, void **data);

// Returns number of elements in list
int list_size(const List *list);

// Loops trough list and applies function on each of elements
// please make sure that map function is safe to use with data
// use result pointer for returning  positive values or success
// int denotes success
int list_map_loop(List *list, int map(void *data), int *result);

// key is value for comparison and result is
// ListElmt where the data is contained
// MUST KNOW SIZE of relevant data
int list_search(List *list, void *key, ListElmt *result);

// returns point to head of linked list
#define list_head(list) ((list)->head)

// returns last element in list
#define list_tail(list) ((list)->tail)

// checks if pointer is to head to list
#define list_is_head(list, element) ((element) == (list)->head ? 1 : 0)

// checks if point is to tail of list
#define list_is_tail(list, element) ((element)->next == NULL ? 1 : 0)

// returns pointer to data stored in element
#define list_data(element) ((element)->data)

// returns pointer to next elements
#define list_next(element) ((element)->next)
#endif
