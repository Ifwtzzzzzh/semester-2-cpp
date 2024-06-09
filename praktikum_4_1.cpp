#include <iostream>
using namespace std;

class Mahasiswa {
	private:
		string nama;
		string nim;
		string jurusan;
	public:
		Mahasiswa(string nama, string nim, string jurusan) {
			this->nama = nama;
			this->nim = nim;
			this->jurusan = jurusan;
		}		
		void tampilkanMahasiswa() {
			cout << "Nama : " << nama << endl;
			cout << "NIM : " << nim << endl;
			cout << "Jurusan : " << jurusan << endl;
		};
};

int main() {
	string nama;
	string nim;
	string jurusan;
	
	cout << "Masukkan nama : ";
	cin >> nama;
	cout << "Masukkan nim : ";
	cin >> nim;
	cout << "Masukkan jurusan : ";
	cin >> jurusan;
	
	Mahasiswa mahasiswa1(nama, nim, jurusan);
	Mahasiswa mhs2("Fulan", "202231004", "Teknik Elektro");
	mahasiswa1.tampilkanMahasiswa();
	mhs2.tampilkanMahasiswa();
	
//	mahasiswa1.panggilNama();
//	mahasiswa1.panggilNIM();
	
//	mahasiswa1.nama = "Dwitian";
//	mahasiswa1.nim = "202231002";
//	mahasiswa1.jurusan = "Teknik Informatika";
//	mahasiswa1.ipk = 4;
//	mhs2.nama = "Fulan";
//	mhs2.nim = "202231004";
//	mhs2.jurusan = "Teknik Elektro";
//	mhs2.ipk = 4;
//	cout << "Mahasiswa 1." << endl;
//	cout << mahasiswa1.nama << endl;
//	cout << mahasiswa1.nim << endl;
//	cout << mahasiswa1.jurusan << endl;
//	cout << mahasiswa1.ipk << endl;
//	cout << endl;
//	cout << "Mahasiswa 2." << endl;
//	cout << mhs2.nama << endl;
//	cout << mhs2.nim << endl;
//	cout << mhs2.jurusan << endl;
//	cout << mhs2.ipk << endl;
	return 0;
}
