#include<iostream>
using namespace std;

float segitiga(float alas, float tinggi) {
	float luas = 0.5 * alas * tinggi;
	return luas;
}

int main() {
	segitiga(3, 6);
	cout << "Luas Segitiga = " << segitiga(3, 6);
}
