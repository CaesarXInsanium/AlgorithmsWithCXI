#include "factorial.h"
#include <stdio.h>
// function that calculates factorial of number using recursion
int factorial(int n){
  if (n == 0 || n == 1){
    return 1;
  }else if(n > 1){
    return n *  factorial(n-1);
  }else{
    return -1;
  }
}

// tail recursion version. 'a' is generally set to one. This can be turned into a macro
int tailfact(int n, int a){
  if (n<=1){
    return a;
  }else if(n>1){
    return tailfact(n-1, n * a);
  }else{
    return -1;
  }
}

//easy peasy lemon squeasy
#define FACT(x) tailfact(x,1)

 int main(void){
  printf("Result: \t%d\n", factorial(7));
  printf("Result: \t%d\n", tailfact(13, 1));
  printf("Result: \t%d\n", FACT(9));
  return 0;
}
