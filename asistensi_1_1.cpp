#include <iostream>
using namespace std;

void luasSegitiga() {
	cout << "Proses dan Hasil Luas Segitiga";
}

void luasPersegiPanjang() {
	cout << "Proses dan Hasil Luas Segitiga";
}


int main() {
	int pilihan;
	cout << "1. Luas Segitiga" << endl;
	cout << "2. Luas Persegi Panjang" << endl;
	cout << "===============================" << endl;
	cout << "Masukkan Pilihan : ";
	cin >> pilihan;
	
	switch (pilihan) {
		case 1:
			luasSegitiga();
			break;
		case 2:
			luasPersegiPanjang();
			break;
		default:
			cout << "Input Tidak Tersedia";
	}
	
	return 0;	
}
