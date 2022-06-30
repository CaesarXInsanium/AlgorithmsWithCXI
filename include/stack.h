#pragma once

#include <stdlib.h>
#include "linked_list.h"

typedef List Stack;

// initializes a pointer to memory allocated to the stack. User must provide functions
// to free the dynamic memory properly taken up by the associated data
#define stack_init list_init

// call the destroy function on all elements in the stack and deallocates the stack pointer
#define stack_destroy list_destroy

// adds new element to top of stack. each element must be dynamically allocated
int stack_push(Stack *stack, const void *data);

// removes top element on stack and passes pointer to remove element up to specified pointer
int stack_pop(Stack *stack, void **data);

// return pointer to data at top of stack
#define stack_peek(X)

#define stack_size(X)

