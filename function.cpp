#include<iostream>
using namespace std;

void nama() {
	cout << "Nama saya Nosa" << endl;
}

void persegiPanjang(float panjang, float lebar) {
	float luas = panjang * lebar;
	cout << "Luas Persegi Panjang adalah " << luas << endl;
}

int main() {
	float p, l;
	cout << "Masukkan Panjang ";
	cin >> p;
	cout << "Masukkan Lebar ";
	cin >> l;
	persegiPanjang(p, l);
}
