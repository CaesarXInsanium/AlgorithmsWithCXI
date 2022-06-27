#pragma once

typedef struct Stack_ Stack;

void stack_init(Stack *stack, void (*destroy)(void *data));
