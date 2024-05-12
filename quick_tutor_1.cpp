#include <iostream>
using namespace std;

double hitungLuasPersegiPanjang(double panjang, double lebar) {
    return panjang * lebar;
}

double hitungVolumeBalok(double panjang, double lebar, double tinggi) {
    return panjang * lebar * tinggi;
}

int main() {
    double panjang, lebar, tinggi;
    cout << "Mauskkan panjang persegi panjang : ";
    cin >> panjang;
    cout << "Mauskkan panjang persegi panjang :";
    cin >> lebar;

    double luas = hitungLuasPersegiPanjang(panjang, lebar);
    return 0;
}