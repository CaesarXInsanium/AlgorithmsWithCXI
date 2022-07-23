#include "Algorithms/sort.h"
#include <stdio.h>
#include <stdlib.h>

#define TEST_SIZE 10

int cmp(const void *key1, const void *key2) {
  if (*(int *)key1 > *(int *)key2) {
    return 1;
  } else if (*(int *)key1 == *(int *)key2) {
    return 0;
  } else if (*(int *)key1 < *(int *)key2) {
    return -1;
  } else {
    return -1;
  }
  return 0;
}

int main(void) {
  int *buffer = (int *)malloc(TEST_SIZE * sizeof(int *));
  for (int i = 0; i < TEST_SIZE; i++) {
    int *k = (int *)malloc(sizeof(int));
    *k = rand() >> 8;
    buffer[i] = *k;
  }

  puts("Non Sorted");
  for (int i = 0; i < TEST_SIZE; i++) {
    printf("Value:\t%d\n", buffer[i]);
  }

  ctsort(buffer, TEST_SIZE, RAND_MAX >> 8);

  puts("Sorted");
  for (int i = 0; i < TEST_SIZE; i++) {
    printf("Value:\t%d\n", buffer[i]);
  }
  free(buffer);
}
