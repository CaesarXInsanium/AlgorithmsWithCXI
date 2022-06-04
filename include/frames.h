#ifndef FRAMES_H
#define FRAMES_H
#include "linked_list.h"
// simple implementation of alloc_frame using a linked list denoting available
// frames. will return frame number or -1 as failure
int alloc_frame(List *frames);

// does opposite of alloc frame
int free_frame(List *frame, int frame_number);
#endif
