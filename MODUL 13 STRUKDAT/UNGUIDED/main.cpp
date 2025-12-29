// AGUNG RAMADHAN
// 103112430060

#include "circularlist.h"

int main()
{
    List L;
    address P1, P2;
    infotype x;

    createList(L);

    cout << "Coba insert first, last, dan after\n"
         << endl;

    P1 = createData("Agung", "04", 'l', 4.0);
    insertFirst(L, P1);

    P1 = createData("Rama", "06", 'l', 3.45);
    insertLast(L, P1);

    P1 = createData("Bilqis", "02", 'l', 3.71);
    insertFirst(L, P1);

    P1 = createData("Risky", "01", 'l', 3.3);
    insertFirst(L, P1);

    P1 = createData("Cahayu", "07", 'p', 3.75);
    insertLast(L, P1);

    x.nim = "07";
    P1 = findElm(L, x);
    P2 = createData("Jule", "03", 'p', 3.5);
    insertAfter(L, P1, P2);

    x.nim = "02";
    P1 = findElm(L, x);
    P2 = createData("Yuka", "08", 'p', 3.3);
    insertAfter(L, P1, P2);

    x.nim = "04";
    P1 = findElm(L, x);
    P2 = createData("Daehoon", "05", 'p', 3.4);
    insertAfter(L, P1, P2);

    printInfo(L);

    return 0;
}
