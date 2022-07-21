#pragma once

#include "llist.h"

typedef List Set;

// initializes the memory allocation for the pointer. must pass deallocation
// function and function to determine the mathematical equality of members
void set_init(Set *set, int (*match)(const void *key1, const void *key2),
              void (*destroy)(void *data));

// call deallocation function on all members. only works in he proper
// deallocation function is passed
#define set_destroy list_destroy

// add new member, checks equality with all other members. return 1 if
// successfull -1 if not
int set_insert(Set *set, const void *data);

// removes member from set. Returns pointer to data. return 1 if successfull -1
// if unsuccessfull
int set_remove(Set *set, void **data);

// peforms set union between two sets using the pointers. Builds new set from
// result. return 1 if successfull -1 for failed operation. must allocate memory for set beforehand
int set_union(Set *setu, const Set *set1, const Set *set2);

// peforms set intersection and builds new set from result sets 'set' pointer to
// new set. return 1 for success, -1 for failure. Builds new set from result.
int set_intersection(Set *seti, const Set *set1, const Set *set2);

// peforms set difference set1 - set2. Builds new set from result. return 1
// success -1 failure
int set_difference(Set *setd, const Set *set1, const Set *set2);

// checks if void pointer matches any member and return boolean result
int set_is_member(Set *set, const void *data);

// checks if set1 is subset of set2. return bool
int set_is_subset(const Set *set1, const Set *set2);

// return set equality boolean
int set_is_equal(const Set *set1, const Set *set2);

// returns number of elements
#define set_size(set) ((set)->size)
