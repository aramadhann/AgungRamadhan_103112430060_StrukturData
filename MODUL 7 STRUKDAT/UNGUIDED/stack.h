// AGUNG RAMADHAN
// 103112430060

#ifndef STACK_H
#define STACK_H

const int MAX_SIZE = 20;

struct Stack {
    int data[MAX_SIZE];
    int top;
};

void initStack(Stack &S);
bool isFull(const Stack &S);
bool isEmpty(const Stack &S);
void push(Stack &S, int value);
int pop(Stack &S);
void showStack(Stack S);
void reverseStack(Stack &S);
void pushInOrder(Stack &S, int value);
void inputToStack(Stack &S);

#endif
