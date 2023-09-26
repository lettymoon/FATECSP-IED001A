#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000000

typedef struct stack{
    char arr[MAX_SIZE];
    int top;
} Stack;

void create(Stack *s){
    s->top = -1;
}

void destroy(Stack *s){
    s->top = -1;
}

int isEmpty(Stack *s){
    if(s->top == -1)
        return 1;
    else
        return 0;
}

int isFull(Stack *s){
    if(s->top == MAX_SIZE-1)
        return 1;
    else
        return 0;
}

void push(char x, Stack *s){
    if(isFull(s)){
        puts("stack overflow!");
        abort();
    }
    s->top++;
    s->arr[s->top] = x;
}

char pop(Stack *s){
    if(isEmpty(s)){
        puts("stack underflow!");
        abort();
    }
    char aux = s->arr[s->top];
    s->top--;
    return aux;
}

char top(Stack *s){
    if(isEmpty(s)){
        puts("stack underflow!");
        abort();
    }
    return s->arr[s->top];
}

