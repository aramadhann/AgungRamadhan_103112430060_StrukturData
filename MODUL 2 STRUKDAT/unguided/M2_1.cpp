//Agung Ramadhan
//103112430060

#include <iostream>
using namespace std;

int main() {
    string nama[5];
    float nilai[5][3];
    float rata[5];
    int terbaik = 0;

    cout << "PROGRAM NILAI MAHASISWA" << endl;
    cout << "=========================" << endl;

    // Input data mahasiswa
    for (int i = 0; i < 5; i++) {
        cout << "\nMahasiswa ke-" << i + 1 << endl;
        cout << "Nama: ";
        cin.ignore(); // membersihkan buffer sebelum getline
        getline(cin, nama[i]);

        float total = 0;
        for (int j = 0; j < 3; j++) {
            cout << "Nilai mata kuliah " << j + 1 << " : ";
            cin >> nilai[i][j];
            total += nilai[i][j];
        }
    }

    // Hitung rata-rata
    for (int i = 0; i < 5; i++) {
        float total = 0;
        for (int j = 0; j < 3; j++) {
            total += nilai[i][j];
        }
        rata[i] = total / 3;
    }

    // Cari mahasiswa terbaik
    for (int i = 1; i < 5; i++) {
        if (rata[i] > rata[terbaik]) {
            terbaik = i;
        }
    }

    // Tampilkan hasil
    cout << "\n============================================================\n";
    cout << "Nama\t\tNilai1\tNilai2\tNilai3\tRata-rata\tKeterangan\n";
    cout << "------------------------------------------------------------\n";

    for (int i = 0; i < 5; i++) {
        cout << nama[i];
        if (nama[i].length() < 8) cout << "\t\t";
        else if (nama[i].length() < 16) cout << "\t";
        cout << nilai[i][0] << "\t" << nilai[i][1] << "\t" << nilai[i][2]
             << "\t" << rata[i];
        if (i == terbaik)
            cout << "\t<-- Terbaik";
        cout << endl;
    }

    cout << "============================================================\n";
    cout << "Mahasiswa dengan nilai terbaik adalah: " << nama[terbaik]
         << " (Rata-rata: " << rata[terbaik] << ")\n";

    return 0;
}
