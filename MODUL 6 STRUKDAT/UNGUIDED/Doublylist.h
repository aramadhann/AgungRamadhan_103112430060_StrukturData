// AGUNG RAMADHAN | 103112430060

#ifndef DOUBLYLIST_H
#define DOUBLYLIST_H
#include <iostream>
#include <string>
using namespace std;

struct Vehicle {
    string plate;
    string color;
    int year;
};

typedef Vehicle dataType;

struct Node {
    dataType info;
    Node *next;
    Node *prev;
};

typedef Node* pointer;

struct DoubleList {
    pointer head;
    pointer tail;
};

void initList(DoubleList &L);
pointer createNode(dataType x);
void freeNode(pointer &P);
void showList(DoubleList L);
void addLast(DoubleList &L, pointer P);
pointer searchData(DoubleList L, string plate);
void removeFirst(DoubleList &L, pointer &P);
void removeLast(DoubleList &L, pointer &P);
void removeAfter(pointer prec, pointer &P);

#endif
