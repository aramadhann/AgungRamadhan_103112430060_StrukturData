// Agung Ramadhan
// 103112430060

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Input: ";
    cin >> num;

    for (int i = num; i >= 1; i--) {
        for (int s = 0; s < (num - i); s++) {
            cout << "  "; 
        }
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << "* ";
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    for (int s = 0; s < num; s++) {
        cout << "  ";
    }
    cout << "*" << endl;

    return 0;
}
