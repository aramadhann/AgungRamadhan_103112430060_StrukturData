// AGUNG RAMADHAN
// 103112430060

#include "singlylist.h"

void CreateList(List &L) {
    L.first = Nil;
}

address alokasi(infotype x) {
    address P = new ElmtList;
    P->info = x;
    P->next = Nil;
    return P;
}

void dealokasi(address &P) {
    delete P;
}

void insertFirst(List &L, address P) {
        P->next = L.first;
        L.first = P;
}


void insertLast(List &L, address P) {
    if (L.first == Nil) {
        // jika list kosong, insertLast sama dengan insertFirst
        insertFirst(L, P);
    } else {
        // jika list tidak kosong, cari elemen terakhir
        address Last = L.first;
        while (Last->next != Nil) {
            Last = Last->next;
        }
        // Sambungkan elemen terakhir ke elemen baru (P)
        Last->next = P;
    }
}

void printInfo(List L) {
    address P = L.first;
    if (P == Nil) {
        std::cout << "List kosong" << std::endl;
    } else {
    while (P != Nil) {
        std::cout << P->info << " ";
        P = P->next;
        }
        std::cout << std::endl;
    }
}
