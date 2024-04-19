#include <iostream>
using namespace std;

float hitungLuasSegitiga(float alas, float tinggi);
float hitungLuasPersegiPanjang(float panjang, float lebar);
// Deklarasi fungsi untuk menghitung luas segitiga

int main() {
  int pilih;
  float alas, tinggi, panjang, lebar;

  // Menampilkan menu pilihan
  cout << "Pilih bangun datar yang ingin dihitung luasnya:" << endl;
  cout << "1. Segitiga" << endl;
  cout << "2. Persegi Panjang" << endl;
  cout << "Masukkan pilihan Anda: ";
  cin >> pilih;

  // Memproses pilihan pengguna
  switch (pilih) {
    case 1:
    cout << "Masukkan alas segitiga: ";
    cin >> alas;
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;
    cout << "Luas segitiga: " << hitungLuasSegitiga(alas, tinggi) << endl;
    break;

    case 2:
    cout << "Masukkan panjang persegi panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> lebar;
    cout << "Luas persegi panjang: " << hitungLuasPersegiPanjang(panjang, lebar) << endl;
    break;
  }

  return 0;
}

float hitungLuasSegitiga(float alas, float tinggi) {
  return (alas * tinggi) / 2;
}

float hitungLuasPersegiPanjang(float panjang, float lebar) {
  return panjang * lebar;
}