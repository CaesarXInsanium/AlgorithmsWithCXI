#include "Algorithms/sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int merge(void *data, int esize, int i, int j, int k,
                 int (*compare)(const void *key1, const void *key2)) {
  char *a = data;
  char *m;
  int ipos, jpos, mpos;

  ipos = i;
  jpos = j + 1;
  mpos = 0;
  if ((m = (char *)malloc(esize * ((k - 1) + 1))) == NULL) {
    return -1;
  }

  while (ipos <= j || jpos <= k) {
    if (ipos > j) {
      while (jpos <= k) {
        memcpy(&m[mpos * esize], &a[jpos * esize], esize);
        jpos++;
        mpos++;
      }
      continue;
    } else if (jpos > k) {
      while (ipos <= j) {
        memcpy(&m[mpos * esize], &a[ipos * esize], esize);
        ipos++;
        mpos++;
      }
      continue;
    }

    if (compare(&a[ipos * esize], &a[jpos * esize]) < 0) {
        memcpy(&m[mpos * esize], &a[ipos * esize], esize);
        ipos++;
        mpos++;

    } else {
      memcpy(&m[mpos * esize], &a[jpos * esize], esize);
      jpos++;
      mpos++;
    }
  }

  memcpy(&a[i * esize], m, esize * ((k - i) + 1));
  free(m);
  return 0;
}
int mgsort(void *data, int size, int esize, int i, int k,
           int (*compare)(const void *key1, const void *key2)) {
  int j;

  if (i < k) {
    j = (int)(((i + k - 1)) / 2);

    if (mgsort(data, size, esize, i, j, compare) < 0) {
      return -1;
    }
    if (mgsort(data, size, esize, j + 1, k, compare) < 0) {
      return -1;
    }

    if (merge(data, esize, i, j, k, compare) < 0) {
      return -1;
    }
  }
  return 0;
}
