#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

typedef struct {
  int value;
  struct Node * next;
} Node;

Node * push(Node * stack, int num);

Node * pop(Node ** stack);

void printStack(Node * stack);

#endif // STACK_H_INCLUDED