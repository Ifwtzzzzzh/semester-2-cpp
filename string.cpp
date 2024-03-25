#include<iostream>
#include<string.h>
using namespace std;

int main() {
	char kata[15];
	char duplikat[15];
	cout << "Masukkan karakter: ";
	cin >> kata;
	cout << "=============================" << endl;
	strcpy(duplikat, kata);
	cout << "Karakter yang diduplikat = " << duplikat << endl;
	cout << "Karakter yang diubah ke huruf besar = " << strupr(kata) << endl;
	cout << "Karakter yang diubah ke huruf kecil = " << strlwr(kata) << endl;
	cout << "Panjang karakter = " << strlen(kata) << endl;
	cout << "Kata yang dibalik = " << strrev(kata) << endl;
}
