#include <iostream>
using namespace std;

void myFunction(int nim, string nama) {
    cout << "NIM anda adalah " << nim << endl;
    cout << "Nama anda adalah " << nama << endl;
}

int main() {
    int nim;
    string nama;

    cout << "Masukkan NIM anda: ";
    cin >> nim;
    cout << "Masukkan Nama anda: ";
    cin.ignore();
    getline(cin, nama);
    myFunction(nim, nama);

    return 0;
}