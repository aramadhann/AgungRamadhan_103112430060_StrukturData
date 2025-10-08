//Agung Ramadhan
//103112430060

#include <iostream>
using namespace std;

// Mendeklarasikan prototipe fungsi
int maks3(int a, int b, int c);

int main() {
    int x, y, z;
    cout << "Masukkan bilangan ke-1: ";
    cin >> x;
    cout << "Masukkan bilangan ke-2: ";
    cin >> y;
    cout << "Masukkan bilangan ke-3: ";
    cin >> z;

    cout << "Nilai maksimum adalah " << maks3(x, y, z);
    return 0;
}

// Badan fungsi
int maks3(int a, int b, int c) {
    int temp_maks = a; // anggap a yang terbesar
    if (b > temp_maks) 
        temp_maks = b; // ganti maks
    if (c > temp_maks) 
        temp_maks = c; // ganti maks
    return temp_maks;
}