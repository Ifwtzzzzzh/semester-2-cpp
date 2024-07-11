#include <iostream>
#include <string>

using namespace std;

struct Siswa {
    string nama;
    string kampus;
    unsigned int uangSaku;
};

int main() {
    // Deklarasi array siswa dengan tiga elemen
    Siswa siswa[3];

    // Inisialisasi data siswa
    siswa[0] = {"Hadi", "IT PLN", 100000};
    siswa[1] = {"AMINI DWI PUSPITA SARI", "UNIVERSITAS INDONESIA", 300000};
    siswa[2] = {"HIGHKAL", "ITB", 7500000};

    // Menampilkan data siswa
    for (int i = 0; i < 3; ++i) {
        cout << siswa[i].nama << " bersekolah di " << siswa[i].kampus << endl;
        cout << "dengan uang saku " << siswa[i].uangSaku << " per hari" << endl;
    }

    return 0;
}

