#include <iostream>
using namespace std;

void ubahNilai(int &nilai1, int &nilai2) {
	int c;
	c = nilai1;
	nilai1 = nilai2;
	nilai2 = c;
}

int main() {	
	int a, b;
	a = 2;
	b = 10;
	cout << "Nilai sebelum diubah" << endl;
	cout << "Nilai 1 : " << a << endl;
	cout << "Nilai 2 : " << b << endl;
	
	ubahNilai(a, b);
	cout << "Nilai setelah diubah" << endl;
	cout << "Nilai 1 : " << a << endl;
	cout << "Nilai 2 : " << b << endl;
	return 0;	
}
