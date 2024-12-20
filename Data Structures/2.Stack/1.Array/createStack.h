#include <stdlib.h>
#include "stack.h"

Stack* createStack(unsigned totalCapacity){
    Stack *newStack = (Stack *) malloc(sizeof(Stack *));

    newStack->top = NULL;
    newStack->capacity = totalCapacity;
    newStack->array = (int*) malloc(newStack->capacity * malloc(int));

    return newStack;

}
