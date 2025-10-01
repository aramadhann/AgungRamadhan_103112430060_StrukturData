// Agung Ramadhan
// 103112430060

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Masukkan angka (0-100): ";
    cin >> num;

    string satuan[] = {"", "satu", "dua", "tiga", "empat", "lima",
                       "enam", "tujuh", "delapan", "sembilan"};

    if (num < 0 || num > 100) {
        cout << "Angka harus 0 s.d 100\n";
        return 0;
    }

    cout << num << " : ";

    switch (num) {
        case 0:  cout << "nol"; break;
        case 10: cout << "sepuluh"; break;
        case 11: cout << "sebelas"; break;
        case 100: cout << "seratus"; break;
        default:
            if (num < 10) cout << satuan[num];
            else if (num < 20) cout << satuan[num - 10] << " belas";
            else {
                cout << satuan[num / 10] << " puluh";
                if (num % 10 != 0) cout << " " << satuan[num % 10];
            }
    }
    cout << endl;
    return 0;
}