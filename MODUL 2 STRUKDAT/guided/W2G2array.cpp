//Agung Ramadhan
//103112430060

#include <iostream>

using namespace std;

#define MAX 5

int main() {
    int i, j;
    float nilai[MAX]; // Array 1 dimensi
    static int nilai_tahun[MAX][MAX] = { // Array 2 dimensi
        {0, 2, 2, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 3, 3, 3, 0},
        {4, 4, 0, 0, 4},
        {5, 0, 0, 0, 5}
    };

    // mengisi array 1 dimensi
    cout << "=== Input Nilai Siswa===\n";
    for (i = 0; i < MAX; i++) {
        cout << "Masukkan Nilai ke-" << i + 1 << "= ";
        cin >> nilai[i];
    }

    // menampilkan isi array 1 dimensi
    cout << "\n=== Data Nilai Siswa ===\n";
    for (i = 0; i < MAX; i++) {
        cout << "Nilai ke-" << i + 1 << " = " << nilai[i] << endl;
    }

    // Menampilkan isi array 2 dimensi
    cout << "\n=== Nilai Tahunan ===\n";
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            cout << nilai_tahun[i][j] << " ";
        }
        cout << endl;
    }
}