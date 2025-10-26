// AGUNG RAMADHAN
// 103112430060

#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <iostream>
#include <string>
#include <algorithm> // untuk transform()
using namespace std;

struct Lagu {
    string namaLagu;
    string artis;
    float panjangWaktu;
    Lagu* next;
};

class Playlist {
private:
    Lagu* awal;
    string toLowerCase(const string& str); // helper function

public:
    Playlist();
    void insertFirst(const string& nama, const string& musisi, float waktu);
    void insertLast(const string& nama, const string& musisi, float waktu);
    void insertAfter3(const string& nama, const string& musisi, float waktu);
    void deleteByTitle(const string& nama);
    void showPlaylist();
};

#endif