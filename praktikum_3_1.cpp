#include <iostream>
using namespace std;

int main() {
	int a = 2;
	int* ptr = &a;
	
	cout << "Alamat dari a = " << &a << endl;
	cout << "Nilai dalam alamat a = " << &a << endl;
	cout << "Alamat a dengan pointer = " << ptr << endl;
	cout << "Value dalam a mengguankan pointer = " << *ptr << endl;
	return 0;
}
