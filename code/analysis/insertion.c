// Analysis Example: Insertion Sort
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int issort(void *data, int size, int esize,
           int (*compare)(const void *key1, const void *key2)) {
  char *a = data;
  void *key;
  int i, j;

  // allocate storage for keys
  if ((key = (char *)malloc(esize)) == NULL) {
    return -1;
  } else {
    // loop trought data and insert data in sorted elements
    for (j = 1; j < size; j++) {
      void *dest = key;          // currect location to copy data to
      void *src = &a[j * esize]; // caculate location of data to compare
      memcpy(dest, src, esize);
      i = j - 1;

      while (i >= 0 && compare(&a[i * esize], key) > 0) {
        memcpy(&a[(i + 1) * esize], &a[i * esize], esize);
        i--;
      }
      memcpy(&a[(i + 1) * esize], key, esize);
    }
    free(key);
    return 1;
  }
}

// main entry point of this program
int *compare(void *a, void *b) {
  printf("Comparing:\ta(%p)\tb(%p)", a, b);
  int *result = malloc(sizeof(int));

  return result;
}
int main() {
  // int data[] = {1,5,8,3,8,4,8,4,8};

  puts("Hello World");
  return 0;
}
