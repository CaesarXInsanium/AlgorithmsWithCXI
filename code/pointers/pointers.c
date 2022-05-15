#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// Rudamentary linked list
typedef struct LinkedListNode{
  void * data;
  struct LinkedListNode *next;
} LinkedListNode;

//generic swap function
// takes in to pointers to two thins of equal size and their size in size_t
int swap(void *x, void *y, size_t size){
  void *tmp;
  if((tmp = malloc(size)) == NULL){
    return -1;
  }
  memcpy(tmp, x,size);memcpy(x,y,size);memcpy(y,tmp,size);
  free(tmp);
  return 0;
}

int main(void){
  // accessing elements in an array
  int i = 4;
  int a[] = {0,1,2,3,4,5,6,7,8,9,0};
  a[i] = 90; // this is the same as
  *(a + i) = 90; // this

  // multidimensional array
  int tensor[7][13];
  i = 2;
  int j = 6;
  tensor[i][j] = 0; //accesing value in tensor
  *(*(tensor + i) + j) = 0; // is the same as doing it like this
  
  // evil floating bit hack. The source of all madness
  int q = 1231;
  double p = *(double *)&q;
  printf("Value: %a\n", p);

  //usage of the better swap function
  int h = 0;
  int g = 1;
  swap(&h,&g,sizeof(int));
  printf("H: %d\th: %d\n", h,g);

  puts("Hello World");
  return 0;
}
