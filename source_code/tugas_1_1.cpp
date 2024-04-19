#include <iostream>
using namespace std;

double rectangleWide(double a, double b) {
    double result = a * b;
    cout << "Hasil dari Luas Segi Empat Adalah: " << result << endl;
    return result;
}

double triangleWide(double a, double b) {
    double result = a * b / 2;
    cout << "Hasil dari Luas Segitiga Adalah: " << result << endl;
    return result;
}

int main() {
    double a, b, result;
    int operation;
    cout << "Menghitung Luas Segitiga dan Persegi" << endl;
    cout << "=====================================" << endl;
    cout << "1. Luas Segitiga" << endl;
    cout << "2. Luas Persegi" << endl;
    cout << "0. Keluar" << endl;
    cout << "=====================================" << endl;

    cout << "Pilih operasi: ";
    cin >> operation;
    if (operation != 0 && operation <= 2) {
        cout << "Masukkan bilangan pertama: ";
        cin >> a;
        cout << "Masukkan bilangan kedua: ";
        cin >> b;
    } else if (operation == 0) {
        cout << "Program Selesai";
    }

    switch (operation) {
        case 1:
        triangleWide(a, b);
        break;
        case 2:
        rectangleWide(a, b);
        default:
        cout << "Program Tidak ada";
        break;
    }

    return 0;
}