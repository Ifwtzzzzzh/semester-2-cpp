#include<iostream>
using namespace std;

void swap(string a, string b) {
	a = b;
	b = a;
	cout << "Nilai dalam fungsi : " << endl;
	cout << "a: " << a << " b: " << b << endl;
}

int main() {
	string x, y;
	x = "test";
	y = "whala";
	cout << "Nilai dalam Main sebelum : " << endl;
	cout << "x: " << x << " y: " << y << endl;
	swap(x, y);
	cout << "Nilai dalam Main sesudah : " << endl;
	cout << "x: " << x << " y: " << y << endl;
}
