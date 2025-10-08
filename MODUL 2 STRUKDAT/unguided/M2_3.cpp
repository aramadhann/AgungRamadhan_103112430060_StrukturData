// Agung Ramadhan
// 103112430060

#include <iostream>
using namespace std;

// Fungsi untuk menghitung rata-rata nilai siswa
float rataRata(int nilai[], int n) {
    float total = 0;
    for (int i = 0; i < n; i++) total += nilai[i]; 
    return total / n; 
}

// Fungsi untuk mencari nilai maksimum dan minimum sekaligus
void cariMaksMin(int nilai[], int n, int &maks, int &min) {
    maks = nilai[0];
    min = nilai[0];  
    for (int i = 1; i < n; i++) {
        if (nilai[i] > maks) maks = nilai[i]; 
        if (nilai[i] < min)  min = nilai[i];  
    }
}

int main() {
    int N;
    cout << "Masukkan jumlah siswa: ";
    cin >> N; // input jumlah siswa

    int nilai[N]; // deklarasi array untuk menyimpan nilai setiap siswa

    // Input nilai ujian untuk setiap siswa
    for (int i = 0; i < N; i++) {
        cout << "Nilai siswa ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }

    // Pemanggilan fungsi untuk menghitung rata-rata, maksimum, dan minimum
    float rata = rataRata(nilai, N);
    int maks, min;
    cariMaksMin(nilai, N, maks, min);

    // Menampilkan hasil perhitungan
    cout << "\nRata-rata kelas : " << rata << endl;
    cout << "Nilai tertinggi : " << maks << endl;
    cout << "Nilai terendah  : " << min << endl;

    return 0; // akhir program
}
