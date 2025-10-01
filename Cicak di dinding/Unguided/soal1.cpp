// Agung Ramadhan
// 103112430060

#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    cout << "masukkan angka pertama: ";
    cin >> num1;
    cout << "masukkan angka kedua  : ";
    cin >> num2;

    cout << "\nHasil Operasi: " << endl;
    cout << "penjumlahan   : " << num1 + num2 << endl;
    cout << "pengurangan   : " << num1 - num2 << endl;
    cout << "perkalian     : " << num1 * num2 << endl;

    if (num2 !=0) {
        cout << "Pembagian     : " << num1 / num2 << endl;
    } else {
        cout << "Pembagian     : Tidak bisa dengan 0!!!!!" << endl;
    }
    return 0;
 }
