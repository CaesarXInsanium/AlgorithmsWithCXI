#ifndef DLIST_H
#define DLIST_H
typedef struct DList Dlist;

//initializes memory at list pointer for usage as a linked list. Destroy function is for deallocating memory use by data
void dlist_init(Dlist *list, void (*destroy)(void *data));
#endif
