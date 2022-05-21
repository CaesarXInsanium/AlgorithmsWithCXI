# Recursion

Idea that a concept can be comprised of smaller instances of itself.
The idea that a function can call itself. The a data structure can contain another one of itself.

## Basic Recursion

Function will call itself again and again until either stack overflows or the termination condition is met and value can be returned.

- `winding` when function keeps on calling itself
- `unwinding` when a 

Memory in a C program has 4 areas

- code area: contains machine instructions and functions
- static area: contains objects and variables the persist trought the lifetime of the program
- heap: memory reserved in order for dynamically allocated memory to be used. can grow and shrink according to needs
- stack: contains information on function call and local variables in each function.

each area has there own useage and function

- when a function is called, memory and functions are moved to relevant positions in memory. this is known as `activation`
- `stack frame` allocated memory for a function's internal data and variables. Contains parameters, interval variablwes and return values
- stacks are useful for keep track of function calls be require a considerable amount of memory

## Tail Recursion

In order to function to be tail recursive if the last statment is what contains the recursive call.
Generally compilers can optimize this by removing currect function activation on the stack and replacing with new one.
this is because there is nothing left to do.

gets sentinal value a the maintains the final value from the function that will be returned.

Essential with each level in recursion that the function goes down in, the lesst work that would be required to go up because it does not go up
anymore, there is no need for unwinding

## Questions and Answers

- tail recursion is a fundamental concept that is used to reduce overhead of recursive functions calls
