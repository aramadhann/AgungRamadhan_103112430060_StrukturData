//Agung Ramadhan
//103112430060

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Masukkan jumlah elemen: ";
    cin >> N;

    int arr[N]; // pakai array biasa, bukan memori dinamis
    int *pointer = arr; // pointer menunjuk ke array

    // Input elemen lewat pointer
    for (int i = 0; i < N; i++) {
        cout << "Bilangan ke-" << i + 1 << ": ";
        cin >> *(pointer + i);
    }

    int jumlah = 0, maks = *pointer, min = *pointer;

    // Hitung jumlah, maksimum, dan minimum dengan pointer aritmatika
    for (int i = 0; i < N; i++) {
        jumlah += *(pointer + i);
        if (*(pointer + i) > maks) maks = *(pointer + i);
        if (*(pointer + i) < min)  min = *(pointer + i);
    }

    cout << "\nJumlah semua bilangan = " << jumlah << endl;
    cout << "Nilai maksimum = " << maks << endl;
    cout << "Nilai minimum = " << min << endl;

    return 0;
}
