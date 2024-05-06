#include <iostream>
using namespace std;

void myFunction(int* b) {
	cout << "Value dalam b = " << *b << endl;
	cout << "Alamat dari b = " << &b << endl << endl;
}

void kuadrat(int* valPtr) {
	*valPtr *= *valPtr;
	cout << "Kuadrat a = " << *valPtr << endl;
	cout << "Alamat kuadrat a = " << &valPtr << endl << endl;
}

void kuadratPointer(int& valPtr) {
	valPtr *= valPtr;
	cout << "Kuadrat a = " << valPtr << endl;
	cout << "Alamat kuadrat a = " << &valPtr << endl << endl;
}

int main() {
	int a = 2;
	cout << "Nilai dalam a = " << a << endl;
	cout << "Alamat dari a = " << &a << endl << endl;
	
	int& b = a;
	cout << "Value dalam b = " << b << endl;
	cout << "Alamat dari b = " << &b << endl << endl;
	myFunction(&b);
	kuadrat(&a);
	kuadratPointer(a);
	return 0;
}
