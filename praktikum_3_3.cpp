#include <iostream>
using namespace std;

void setelahDiubah(int &exp, int *ptr_exp) {
	exp = 95;
	*ptr_exp = 95;
	cout << "========Setelah Diubah=======" << endl;
	cout << "----------------------------------------" << endl;
	cout << "Nama Variable \t Alamat \t Isi" << endl;
	cout << "exp \t\t" << &exp << "\t" << exp << endl;
	cout << "*ptr_exp \t" << &ptr_exp << "\t" << *ptr_exp << endl;
}

int main() {
	int point = 50;
	int exp = 100;
	int *ptr_exp = &exp;
	
	cout << "========Sebelum Diubah=======" << endl;
	cout << "Nama Variable \t Alamat \t Isi" << endl;
	cout << "point \t\t" << &point << "\t" << point << endl;
	cout << "exp \t\t" << &exp << "\t" << exp << endl;
	cout << "ptr_exp \t" << &ptr_exp << "\t" << &ptr_exp << endl;
	cout << "*ptr_exp \t" << &ptr_exp << "\t" << *ptr_exp << endl << endl;
	setelahDiubah(exp, &exp);
	return 0;
}
