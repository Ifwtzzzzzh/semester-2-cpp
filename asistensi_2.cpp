#include <iostream>
using namespace std;

void dataMahasiswa(string nama, string nim) {
	cout << "Nama : " << nama << endl;
	cout << "Nim : " << nim;
}

int main() {
	string nama, nim;
	cout << "Masukkan Nama : ";
	getline(cin, nama);
	cout << "Masukkan NIM : ";
	cin >> nim;
	tampilDataDiri(nama, nim);
	
	return 0;	
}
