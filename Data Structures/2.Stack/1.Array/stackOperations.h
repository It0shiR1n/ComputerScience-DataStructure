#include <stdio.h>
#include "stack.h"

int isFull(Stack *userStack){
    return userStack->top == userStack->capacity - 1;

}

int isEmpty(Stack *userStack){
    return userStack->top == -1;

}

void push(Stack *userStack, int newData){
    if(isFull(userStack))
        return;

    userStack->array[++userStack->top] = newData;
    printf("$d pushed to stack\n", newData);

}

int pop(Stack *userStack){
    if(isEmpty(userStack))
        return INT_MIN;

    return userStack->array[userStack->top--];

}

int peek(Stack *userStack){
    if(isEmpty(userStack))
        return INT_MIN; 

    return userStack->array[userStack->top];

}