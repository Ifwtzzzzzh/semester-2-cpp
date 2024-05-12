#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    int umur;
    string hobi;
};

void tampilkanData(Mahasiswa mhs[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Data Mahasiswa " << i + 1 << endl;
        cout << "Nama : " << mhs[i].nama << endl;
        cout << "Umur : " << mhs[i].umur << endl;
        cout << "Hobi : " << mhs[i].hobi << endl;
    }
}

int main() {
    Mahasiswa mahasiswa[3];
    cout << "I GEDE PUTU BAGUS KRISNA PANDE" << endl;
    cout << "Masukkan data mahasiswa" << endl;

    for (int i = 0; i < 3; i++) {
        cout << "Data Mahasiswa " << i + 1 << endl;
        cout << "Nama : ";
        getline(cin, mahasiswa[i].nama);
        cout << "Umur : ";
        cin >> mahasiswa[i].umur;
        cout << "Hobi : ";
        cin.ignore();
        getline(cin, mahasiswa[i].hobi);
        cout << endl;
    }
    tampilkanData(mahasiswa, 3);
    return 0;
}
