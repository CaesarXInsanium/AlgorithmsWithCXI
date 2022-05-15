# Pointer Manipulation

pointers are merely addresses to specific regions in memory. They allow for references to data to exist.
Useful for manipulating memory diorectly and generating useful data structures

They offer great power and a corresponding amount of responsobility.

## Fundamentals

All pointers are is memory addresses to a specific region of memory. Their size corresponds to the architecture
of CPU. 8 bytes for 64 bit systems and 4 bytes fo 32 bit systems. Always one machine word. Generally pointers point to specific bytes in memory.

- `Dangling Pointer` pointer that goes to invalid region of memory. might not be initialized, freed or could belong to sometime else entirely

## Storage Allocation

- when pointer is declared, sufficient space for pointer itself is allocated but not the data that it may point to. Initializing the data is done manually. This is done by compiler
- generally when dynamically allocating storage, pointer to beginning to storage space is allocated
- misused allocate memory generally leads to memory leaks and security vulnerabilities
- good rule of thumb with data structures in C is to make them type generic. Data is owned and managed by user while data strucure is onyl responsible for managing the organization



```c
#include <stdlib.h>
// code will take pointer to pointer. allocate some new storage, turn pointer to be of type pointer to interger
// then will check if the allocated succed by checking if the pointer return is NULL
int g(int **iptr){
    if ((*iptr  = (int *)malloc(sizeof(int))) == NULL){
        return -1;
      }else{
          return 0;
        }
  }
```

## Aggregates and Pointer Arithmetic

**Aggregate data** is data that is composed of multiple elements grouped together.
C contains arrays and structures

### Structures

Generally groups of different elemtns possibly of differebt types use to represent a seperate data type.
Very useful for solving real problems. 

- `Pointer Arithmetic`: method of calculating location of data in memory from initial pointer and offset
- 'linked list': each element contains a pointer to relevant data, as well as the next item in the list. Each item is dynamically allocated.
  - recursive data structures are only possible using pointers to new instances of themselves.
- 'arrays': generally sequences of data of same type. can be statically or dynamically allocated
  - generally, array variables are pointer to first item in the array. True type of pointers is determined by how programmer treats it
  - arrays are pointers to first item in continous sequences in memory. indexes are merely offsets for the relevant addresses
- multidimensional arrays
  - C multidimensioanl arrays are row major.
  - in memory each row is listed as sub array one after another. the each item in each array corresponds to different column

## Pointers as Parameters to Functions

Pointers are used in order to support *call by referance*. This is when point to item is passed to 
function and then function does its thing. *Call by value* involves actually copying
the value in question into the stack frame of the function. This is more memory intensive. 

- call by referance can acutally change the outside value
  -  functions acutally created local copy of the *pointer* to the function
- call by value would only change local copy of the value in question
  - try to convery type and bounds information in dealing with parameters that are passed to functions in order to be able to safely deal with the things
- pointers to pointers as parameters
  - useful and neccesary in order to be able to change the actual values of the pointers themselves in a convenient fashoin
  - useful in removing elements in linked list and recalculating where a pointer is supposed to point to in a data structure

## Generic Points and Casts

Pointers can have types associated with them. However this type system is very weak since address values 
can be fiddled with. Generic pointer as theya re called bypass the type system. In order for a pointer
to be genric it must be a void pointer.

```c
int j = 0;
void *k = &j;
```

- useful in generic function the copy bits of memory from one place to another
- when working with void pointers always remember to do correct Casting

## Function Pointers

function pointers point to executable code and other blocks of information. Functions are data.
Declaring pointers to functions involves declaring parameters and return type.

```c
int (*match)(void *key1, void *key2);
```

declared functions allow use to be able to set funtion pointer to be the value of any other function.
Executing it is the same as ever and will require the appropiate parameters. Useful in switching between 
implementations and being able to switch between different but similar functions

## Questions and Answers

I do not understand just yet these questions

C++ apperantly enforces practices of good software engineering, particulay with the use of constructors and destructors.
Better than the way that C does it.
