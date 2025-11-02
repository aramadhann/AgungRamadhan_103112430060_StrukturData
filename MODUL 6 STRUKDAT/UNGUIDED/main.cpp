// AGUNG RAMADHAN | 103112430060

#include "Doublylist.h"

int main() {
    DoubleList vehicleList;
    initList(vehicleList);
    dataType inputData;
    pointer P;

    int total;
    cout << "Jumlah Kendaraan: ";
    cin >> total;
    cout << endl;

    for (int i = 0; i < total; i++) {
        cout << "Masukkan Plat Nomor     : ";
        cin >> inputData.plate;
        if (searchData(vehicleList, inputData.plate) != NULL) {
            cout << "Plat Nomor Ini Tidak Ditemukan!" << endl;
            continue;
        }
        cout << "Masukkan Warna Kendaraan: ";
        cin >> inputData.color;
        cout << "Masukkan Tahun Pembuatan: ";
        cin >> inputData.year;
        cout << endl;

        P = createNode(inputData);
        addLast(vehicleList, P);
    }

    showList(vehicleList);

    string searchKey;
    cout << "Masukkan Plat Nomor Yang Ingin Dicari: ";
    cin >> searchKey;
    pointer found = searchData(vehicleList, searchKey);
    if (found != NULL) {
        cout << "\nData found!" << endl;
        cout << "Plat Nomor    : " << found->info.plate << endl;
        cout << "Warna         : " << found->info.color << endl;
        cout << "Tahun Produksi: " << found->info.year << endl;
    } else {
        cout << "Data Tidak Ditemukan!" << endl;
    }

    cout << "\nMasukkan Plat Nomor Untuk Dihapus: ";
    cin >> searchKey;
    pointer target = searchData(vehicleList, searchKey);
    if (target == NULL) {
        cout << "Data Tidak Ditemukan!" << endl;
    } else {
        if (target == vehicleList.head)
            removeFirst(vehicleList, target);
        else if (target == vehicleList.tail)
            removeLast(vehicleList, target);
        else {
            pointer prec = target->prev;
            removeAfter(prec, target);
        }
        freeNode(target);
        cout << "Data Berhasil Dihapus!\n";
    }

    cout << "\nData Diperbarui:\n";
    showList(vehicleList);

    return 0;
}
