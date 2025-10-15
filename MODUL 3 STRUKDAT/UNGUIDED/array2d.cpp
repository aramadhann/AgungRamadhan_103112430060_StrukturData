// AGUNG RAMADHAN
// 103112430060

#include <iostream>
using namespace std;

// Menampilkan isi array 3x3
void tampilArray(int A[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

// Menukar isi dua array pada posisi tertentu
void tukarElemen(int A[3][3], int B[3][3], int baris, int kolom) {
    int temp = A[baris][kolom];
    A[baris][kolom] = B[baris][kolom];
    B[baris][kolom] = temp;
}

// Menukar nilai dari dua variabel dengan pointer
void tukarPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int A[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};
                   
    int B[3][3] = {{100, 200, 300},
                   {400, 500, 600},
                   {700, 800, 900}};
                   
    int x = 10, y = 55;

    cout << "Array A:\n"; tampilArray(A);
    cout << "\nArray B:\n"; tampilArray(B);

    // Menukar elemen tengah (baris 1 kolom 1)
    tukarElemen(A, B, 1, 1);

    cout << "\nSetelah tukar elemen (1,1):" << endl;
    cout << "Array A:\n"; tampilArray(A);
    cout << "\nArray B:\n"; tampilArray(B);

    cout << "\nSebelum tukar pointer: x=" << x << ", y=" << y << endl;
    tukarPointer(&x, &y);
    cout << "Setelah tukar pointer: x=" << x << ", y=" << y << endl;

    return 0;
}
