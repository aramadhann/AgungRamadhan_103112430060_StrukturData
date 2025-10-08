// Agung Ramadhan
// 103112430060

#include <iostream>
using namespace std;

// Fungsi untuk menampilkan pola segitiga angka
void polasegitiga(int n) {
    for (int i = 1; i <= n; i++) {       
        for (int j = 1; j <= i; j++) {    
            cout << j << " "; 
        }
        cout << endl; 
    }
}

int main() {
    int n;
    cout << "Masukkan bilangan bulat n: ";
    cin >> n; 

    cout << "\nPola segitiga angka:\n";
    polasegitiga(n); 

    return 0; 
}
