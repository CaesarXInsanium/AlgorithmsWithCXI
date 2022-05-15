#include <stdio.h>
#include <stdlib.h>
#include "factorial.h"

// simple recursive function
void fn(int a){
  if (a <= 0){
    puts("Reached end of recursion");
  }else{
    puts("Another level of recursion");
    fn(a-1);
  }
}

int main(void){
  puts("Hello World");
  fn(10);
  return 0;
}
