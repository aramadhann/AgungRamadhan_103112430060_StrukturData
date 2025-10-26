// Agung Ramadhan
// 103112430060

#include "Playlist.h"

int main() {
    Playlist songList;

    songList.insertLast("Alexandra", "Hindia", 4.1);
    songList.insertLast("Amin Paling Serius", "Sal Priadi", 4.5);
    songList.insertLast("Alamak", "Rizky Febian", 4.0);
    songList.insertLast("Everything You Are", "Hindia", 4.7);
    songList.insertLast("Kita Usahakan Rumah Itu", "Sal Priadi", 5.2);

    int aksi;
    string judulLagu, penyanyiLagu;
    float waktu;

    do {
        cout << "\n=== MENU DAFTAR LAGU ===\n";
        cout << "1. Sisipkan lagu di awal daftar\n";
        cout << "2. Tambahkan lagu di akhir daftar\n";
        cout << "3. Sisipkan lagu setelah lagu ke-3\n";
        cout << "4. Hapus lagu berdasarkan nama (judul)\n";
        cout << "5. Tampilkan seluruh daftar lagu\n";
        cout << "0. Keluar dari aplikasi\n";
        cout << "Pilih: ";
        cin >> aksi;
        cin.ignore();

        switch (aksi) {
        case 1:
            cout << "Masukkan nama lagu: "; getline(cin, judulLagu);
            cout << "Masukkan nama penyanyi: "; getline(cin, penyanyiLagu);
            cout << "Masukkan waktu (menit): "; cin >> waktu;
            songList.insertFirst(judulLagu, penyanyiLagu, waktu);
            break;

        case 2:
            cout << "Masukkan nama lagu: "; getline(cin, judulLagu);
            cout << "Masukkan nama penyanyi: "; getline(cin, penyanyiLagu);
            cout << "Masukkan waktu (menit): "; cin >> waktu;
            songList.insertLast(judulLagu, penyanyiLagu, waktu);
            break;

        case 3:
            cout << "Masukkan nama lagu: "; getline(cin, judulLagu);
            cout << "Masukkan nama penyanyi: "; getline(cin, penyanyiLagu);
            cout << "Masukkan waktu (menit): "; cin >> waktu;
            songList.insertAfter3(judulLagu, penyanyiLagu, waktu);
            break;

        case 4:
            cout << "Masukkan nama lagu yang ingin dihapus: ";
            getline(cin, judulLagu);
            songList.deleteByTitle(judulLagu);
            break;

        case 5:
            songList.showPlaylist();
            break;

        case 0:
            cout << "Keluar dari program.\n";
            break;

        default:
            cout << "Pilihan tidak valid.\n";
        }

    } while (aksi != 0);

    return 0;
}