// Agung Ramadhan
// 103112430060

#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    string NIM; 
};

int main() {
    Mahasiswa mhs;
    mhs.nama = "Agung";
    mhs.NIM = "103112430060";

    cout << "Nama : " << mhs.nama << endl
         << "NIM  : " << mhs.NIM << endl;

    return 0;
}
