#include <iostream>
using namespace std;

struct Tinggal {
	char Jalan[50];
	char Kota[20];
	char Pos[7];
};

struct Mahasiswa {
	string nama;
	string nim;
	Tinggal Alamat;
};

int main() {
	Mahasiswa mhs;
	
	cout << "NIM : ";
	cin >> mhs.nim;
	cout << "Nama : ";
	cin.ignore();
	getline(cin, mhs.nama);
	cout << "Jalan : ";
	cin.getline(mhs.Alamat.Jalan, 50);
	cout << "Kota : ";
	cin.getline(mhs.Alamat.Kota, 20);
	cout << "Pos : ";
	cin >> mhs.Alamat.Pos;
	cout << endl;
	
//	mhs.nama = "Budi";
//	mhs.kampus = "ITPLN Jakarta";
//	mhs.uangSaku = 50000;
//	cout << "Nama : " << mhs.nama << endl;
//	cout << "Kampus : " << mhs.kampus << endl;
//	cout << "Uang Saku : " << mhs.uangSaku << endl;

//	cout << "Masukkan Nama : " ;
//	getline(cin, mhs.nama);
//	cout << "Masukkan Kampus : " ;
//	getline(cin, mhs.kampus);
//	cout << "Uang Saku : " ;
//	cin >> mhs.uangSaku; 
//	cout << "====================" << endl;
//	cout << "Nama : " << mhs.nama << endl;
//	cout << "Kampus : " << mhs.kampus << endl;
//	cout << "Uang Saku : " << mhs.uangSaku << endl;
	return 0;
}
