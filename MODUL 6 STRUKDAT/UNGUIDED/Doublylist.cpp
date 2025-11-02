// AGUNG RAMADHAN | 103112430060

#include "Doublylist.h"

void initList(DoubleList &L) {
    L.head = NULL;
    L.tail = NULL;
}

pointer createNode(dataType x) {
    pointer P = new Node;
    P->info = x;
    P->next = NULL;
    P->prev = NULL;
    return P;
}

void freeNode(pointer &P) {
    delete P;
    P = NULL;
}

void addLast(DoubleList &L, pointer P) {
    if (L.head == NULL) {
        L.head = P;
        L.tail = P;
    } else {
        L.tail->next = P;
        P->prev = L.tail;
        L.tail = P;
    }
}

void showList(DoubleList L) {
    pointer P = L.head;
    cout << "=== DAFTAR KENDARAAN ===" << endl;
    while (P != NULL) {
        cout << "Plat Nomor    : " << P->info.plate << endl;
        cout << "Warna         : " << P->info.color << endl;
        cout << "Tahun Produksi: " << P->info.year << endl;
        cout << endl;
        P = P->next;
    }
}

pointer searchData(DoubleList L, string plate) {
    pointer P = L.head;
    while (P != NULL && P->info.plate != plate) {
        P = P->next;
    }
    return P;
}

void removeFirst(DoubleList &L, pointer &P) {
    if (L.head == NULL)
        P = NULL;
    else if (L.head == L.tail) {
        P = L.head;
        L.head = NULL;
        L.tail = NULL;
    } else {
        P = L.head;
        L.head = L.head->next;
        L.head->prev = NULL;
        P->next = NULL;
    }
}

void removeLast(DoubleList &L, pointer &P) {
    if (L.tail == NULL)
        P = NULL;
    else if (L.head == L.tail) {
        P = L.tail;
        L.head = NULL;
        L.tail = NULL;
    } else {
        P = L.tail;
        L.tail = L.tail->prev;
        L.tail->next = NULL;
        P->prev = NULL;
    }
}

void removeAfter(pointer prec, pointer &P) {
    if (prec != NULL && prec->next != NULL) {
        P = prec->next;
        prec->next = P->next;
        if (P->next != NULL)
            P->next->prev = prec;
        P->next = NULL;
        P->prev = NULL;
    }
}
