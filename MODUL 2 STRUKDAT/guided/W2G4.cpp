//Agung Ramadhan
//103112430060

#include <iostream>
using namespace std;

//prototipe prosedur
void tulis(int x);

int main() {
    int jum;
    cout << "Jumlah baris kata = : ";
    cin >> jum;
    tulis(jum); //pemanggilan prosedur
    return 0;
}

//badan prosedur
void tulis(int x) {
    for (int i = 0; i < x; i++) {
        cout << "Baris ke-" << i + 1 << endl;
    }
}