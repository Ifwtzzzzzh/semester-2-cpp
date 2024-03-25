#include<iostream>
using namespace std;

void swap(int a, int b) {
	int c = a;
	a = b;
	b = c;
	cout << "Nilai dalam fungsi : " << endl;
	cout << "a: " << a << " b: " << b << endl;
}

int main() {
	int x, y;
	x = 5;
	y = 10;
	cout << "Nilai dalam Main sebelum : " << endl;
	cout << "x: " << x << " y: " << y << endl;
	swap(x, y);
	cout << "Nilai dalam Main sesudah : " << endl;
	cout << "x: " << x << " y: " << y << endl;
}
