// AGUNG RAMADHAN
// 103112430060

#include <iostream>
#include "stack.h"
using namespace std;

void initStack(Stack &S) {
    S.top = -1;
}

bool isFull(const Stack &S) {
    return S.top == MAX_SIZE - 1;
}

bool isEmpty(const Stack &S) {
    return S.top == -1;
}

void push(Stack &S, int value) {
    if (!isFull(S)) {
        S.data[++S.top] = value;
    }
}

int pop(Stack &S) {
    if (!isEmpty(S)) {
        return S.data[S.top--];
    }
    return -1;
}

void showStack(Stack S) {
    cout << "[TOP] ";
    for (int i = S.top; i >= 0; i--) {
        cout << S.data[i] << " ";
    }
    cout << endl;
}

void reverseStack(Stack &S) {
    Stack temp;
    initStack(temp);
    while (!isEmpty(S)) {
        push(temp, pop(S));
    }
    S = temp;
}

void pushInOrder(Stack &S, int value) {
    Stack temp;
    initStack(temp);

    while (!isEmpty(S) && S.data[S.top] > value) {
        push(temp, pop(S));
    }

    push(S, value);

    while (!isEmpty(temp)) {
        push(S, pop(temp));
    }
}

void inputToStack(Stack &S) {
    char ch;
    while (cin.get(ch)) {
        if (ch == '\n') break;
        if (isdigit(ch)) {
            push(S, ch - '0');
        }
    }
}
