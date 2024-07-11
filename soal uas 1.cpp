#include <iostream>
#include <string>

using namespace std;

class CMahasiswa {
private:
    float nilaiUTS, nilaiUAS;
public:
    string nim, nama;

    // Konstruktor untuk inisialisasi nilai UTS dan UAS
    CMahasiswa(float, float);

    // Metode untuk menampilkan profil mahasiswa
    void profil();

    // Metode untuk menghitung nilai rata-rata
    float nilai() {
        return (nilaiUTS + nilaiUAS) / 2;
    }
};

// Implementasi konstruktor
CMahasiswa::CMahasiswa(float x, float y) {
    nilaiUTS = x;
    nilaiUAS = y;
}

// Implementasi metode profil
void CMahasiswa::profil() {
    cout << "NIM:\t" << nim << endl;
    cout << "Nama:\t" << nama << endl;
}

int main() {
    float nilaiUTS, nilaiUAS;
    string nim,nama;

    // Input data mahasiswa
    cout << "Masukkan NIM Anda: ";
    cin >> nim;
    cout << "Masukkan Nama Anda: ";
    cin.ignore();  // Mengabaikan karakter newline sebelumnya
    getline(cin, nama);
    cout << "Masukkan Nilai UTS: ";
    cin >> nilaiUTS;
    cout << "Masukkan Nilai UAS: ";
    cin >> nilaiUAS;

    // Validasi input nilai UTS dan UAS
    if (nilaiUTS < 0 ||nilaiUAS < 0){
        cout << "Nilai tidak boleh negatif!" << endl;
        return 1;
    }

    // Membuat objek CMahasiswa
    CMahasiswa mhs(nilaiUTS, nilaiUAS);
    mhs.nim = nim;
    mhs.nama = nama;

    // Output hasil
    cout << endl << "======= Hasil =======" << endl << endl;
    mhs.profil();
    cout << "Nilai rata-rata Anda: " << mhs.nilai() << endl;

    return 0;
}

