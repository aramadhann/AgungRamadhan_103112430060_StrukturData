// AGUNG RAMADHAN
// 103112430060

#include <iostream>
#include <cstdlib>
#include "singlylist.h"
#include "singlylist.cpp"


using namespace std;
int main() {
    List L;
    address P; // Cukup satu pointer untuk digunakan berulang kali

    CreateList(L);

    cout << "Mengisis list menggunakan insertLast..." << endl;

    // Mengisi list sesuai dengan urutan
    P = alokasi(9);
    insertLast(L, P);

    P = alokasi(12);
    insertLast(L, P);

    P = alokasi(8);
    insertLast(L, P);

    P = alokasi(0);
    insertLast(L, P);

    P = alokasi(2);
    insertLast(L, P);

    cout << "Isi list sekarang: ";
    printInfo(L);

    system("pause");
    return 0;
}
