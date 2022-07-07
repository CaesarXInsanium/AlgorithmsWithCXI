#include "frames.h"
#include "llist.h"
#include <stdio.h>
#include <stdlib.h>

int alloc_frame(List *frames) {
  int frame_number, *data;
  // if no frames are available, there is a failure
  if (list_size(frames) == 0) {
    return -1;
  } else {
    // frame could not be retrieved
    if (list_rem_next(frames, NULL, (void **)&data) != 0) {
      return -1;
    } else {
      // saves pointer to frame, frees it
      frame_number = *data;
      free(data);
    }
  }
  return frame_number;
}

int free_frame(List *frame, int frame_number) {
  int *data;
  // allocate storage for the number
  if ((data = (int *)malloc(sizeof(int))) == NULL) {
    return -1;
  }
  *data = frame_number;
  if (list_ins_next(frame, NULL, data) != 0) {
    return -1;
  }
  return 0;
}
