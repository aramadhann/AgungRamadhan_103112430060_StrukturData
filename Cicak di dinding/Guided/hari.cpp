// Agung Ramadhan
// 103112430060

#include <iostream>
using namespace std;

int main() {
    int hari;
    cout << "Hari 1-7 : ";
    cin >> hari;

    if (hari == 7) { // if else
        cout << "Hari Minggu\n";
    } else {
        cout << "Hari Kerja\n";
    }

    switch (hari) { // Versi switch case
        case 7:
            cout << "Hari Minggu\n";
            break;
        default:
            cout << "Hari Kerja\n";
            break;
    }

    return 0;
}