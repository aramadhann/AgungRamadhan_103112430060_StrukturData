// AGUNG RAMADHAN
// 103112430060

#include "Playlist.h"

string Playlist::toLowerCase(const string& str) {
    string lower = str;
    transform(lower.begin(), lower.end(), lower.begin(), ::tolower);
    return lower;
}

Playlist::Playlist() {
    awal = nullptr;
}

void Playlist::insertFirst(const string& nama, const string& musisi, float waktu) {
    Lagu* nodeBaru = new Lagu{nama, musisi, waktu, awal};
    awal = nodeBaru;
}

void Playlist::insertLast(const string& nama, const string& musisi, float waktu) {
    Lagu* nodeBaru = new Lagu{nama, musisi, waktu, nullptr};
    if (!awal) {
        awal = nodeBaru;
        return;
    }
    Lagu* ptr = awal;
    while (ptr->next) {
        ptr = ptr->next;
    }
    ptr->next = nodeBaru;
}

void Playlist::insertAfter3(const string& nama, const string& musisi, float waktu) {
    Lagu* ptr = awal;
    int hitung = 1;

    while (ptr && hitung < 3) {
        ptr = ptr->next;
        hitung++;
    }

    if (!ptr) {
        cout << "Daftar lagu kurang dari 3 lagu, tidak bisa menambah setelah lagu ke-3.\n";
        return;
    }

    Lagu* nodeBaru = new Lagu{nama, musisi, waktu, ptr->next};
    ptr->next = nodeBaru;
}

void Playlist::deleteByTitle(const string& nama) {
    if (!awal) {
        cout << "Daftar lagu kosong.\n";
        return;
    }

    string targetHurufKecil = toLowerCase(nama);
    Lagu* ptr = awal;
    Lagu* sebelum = nullptr;

    while (ptr && toLowerCase(ptr->namaLagu) != targetHurufKecil) {
        sebelum = ptr;
        ptr = ptr->next;
    }

    if (!ptr) {
        cout << "Lagu dengan judul '" << nama << "' tidak ditemukan.\n";
        return;
    }

    if (!sebelum) {
        awal = ptr->next;
    } else {
        sebelum->next = ptr->next;
    }

    delete ptr;
    cout << "Lagu '" << nama << "' berhasil dihapus dari daftar.\n";
}

void Playlist::showPlaylist() {
    if (!awal) {
        cout << "Daftar lagu kosong.\n";
        return;
    }

    Lagu* ptr = awal;
    int i = 1;
    cout << "\n=== Daftar Lagu Playlist ===\n";
    while (ptr) {
        cout << i++ << ". Nama Lagu : " << ptr->namaLagu << endl;
        cout << "   Musisi    : " << ptr->artis << endl;
        cout << "   Waktu     : " << ptr->panjangWaktu << " menit\n";
        cout << "-----------------------------\n";
        ptr = ptr->next;
    }
}