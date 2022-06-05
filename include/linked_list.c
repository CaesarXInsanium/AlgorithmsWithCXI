#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test(int fn(void)) {
  if (fn() == 0) {
    puts("Test Passed");
  } else {
    puts("Test Failed");
  }
}

void list_init(List *list, void (*destroy)(void *data)) {
  // init default values
  list->size = 0;
  list->destroy = destroy;
  list->head = NULL;
  list->tail = NULL;
  return;
}
void list_destroy(List *list) {
  // declare pointer variable to hold data pointer
  void *data;
  // while list is not empty, delete first element and call destruction function
  // on each element. checks for NULL
  while (list_size(list) > 0) {
    if (list_rem_next(list, NULL, (void **)&data) == 0 &&
        list->destroy != NULL) {
      list->destroy(data);
    }
  }
  // provided by string.h. sets bytes to zeroes or specified data
  memset(list, 0, sizeof(List));
}

int list_ins_next(List *list, ListElmt *element, const void *data) {
  // declares pointer for element and allocates space for it
  ListElmt *new_element;
  if ((new_element = (ListElmt *)malloc(sizeof(ListElmt))) == NULL) {
    return -1;
  }
  new_element->data = (void *)data;
  // if parameter element is not specified
  if (element == NULL) {
    // if size of list if 0, add as first element
    if (list_size(list) == 0) {
      list->tail = new_element;
    }
    // set new element as the head of the list
    new_element->next = list->head;
    list->head = new_element;
    // otherwise if parameter element is not NULL
  } else {
    // if parameter element is tail
    if (element->next == NULL) {
      // set new element as tail
      list->tail = new_element;
    }
    // reset next
    new_element->next = element->next;
    element->next = new_element;
  }
  // update counter
  list->size++;
  return 0;
}
int list_rem_next(List *list, ListElmt *element, void **data) {
  ListElmt *old_element;
  // removal is not valid in empty list
  if (list_size(list) == 0) {
    return -1;
  }
  // if element is not specified, head of list will be removed
  if (element == NULL) {
    *data = list->head->data; // save data to external pointer
    old_element = list->head; //
    list->head = list->head->next;
    if (list_size(list) == 1) {
      list->tail = NULL;
    }
    // remove element from specified location
  } else {
    // using pointer of tail element is invalid
    if (element->next == NULL) {
      return -1;
    }
    *data = element->next->data;
    old_element = element->next;
    element->next = element->next->next; // set next two spaces ahead
    if (element->next == NULL) {
      list->tail = element;
    }
  }
  free(old_element);
  list->size--;
  return 0;
}

int list_size(const List *list) {
  int k = list->size;
  return k;
}

int list_map_loop(List *list, int map(void *data), int *result) {
  ListElmt *current = list_head(list);

  while (current->next != NULL) {
    *result = map(current->data);
    if (*result == -1) {
      return -1;
    }
    current = current->next;
  }
  return 0;
}

// int list_search(List *list, void *key, ListElmt *result){
//
//   ListElmt *current = list_head(list);
//
//   while (current->next != NULL) {
//     current = current->next;
//   }
//   return 0;
// }
