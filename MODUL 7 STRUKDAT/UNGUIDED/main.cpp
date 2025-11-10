// AGUNG RAMADHAN
// 103112430060

#include <iostream>
#include "stack.h"
using namespace std;

int main() {
   cout << "Hello world!\n";
   
    Stack A;
    initStack(A);

    push(A, 3);
    push(A, 4);
    push(A, 8);
    pop(A);
    push(A, 2);
    push(A, 3);
    pop(A);
    push(A, 9);
    showStack(A);

    cout << "Setelah dibalik:\n";
    reverseStack(A);
    showStack(A);

    cout << "Hello world!\n";

    Stack B;
    initStack(B);

    pushInOrder(B, 3);
    pushInOrder(B, 4);
    pushInOrder(B, 8);
    pushInOrder(B, 2);
    pushInOrder(B, 3);
    pushInOrder(B, 9);
    showStack(B);

    cout << "Setelah dibalik:\n";
    reverseStack(B);
    showStack(B);

   cout << "Hello world!\n";
    Stack C;
    initStack(C);

    inputToStack(C);
    showStack(C);

    cout << "Setelah dibalik:\n";
    reverseStack(C);
    showStack(C);

    return 0;
}
