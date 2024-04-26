#include <iostream>
using namespace std;

int hitKeliling(int a, int b) {
    int result = a+b;
    cout << "Keliling : " << result;
    return result;
}

double hitKeliling(double a, double b) {
    double result = a+b;
    cout << "Keliling : " << result;
    return result;
}

float hitKeliling(float a, float b, float c) {
    float result = a+b+c;
    cout << "Keliling : " << result;
    return result;
}

int main() {
    int a, b, operation;
    double c, d;
    float e, f, g;
    cout << "Menghitung Keliling Segitiga, Persegi, dan Persegi Panjang" << endl;
    cout << "=====================================" << endl;
    cout << "1. Keliling Segitiga" << endl;
    cout << "2. Keliling Persegi" << endl;
    cout << "3. Keliling Persegi Panjang" << endl;
    cout << "0. Keluar" << endl;
    cout << "=====================================" << endl;

    cout << "Pilih operasi: ";
    cin >> operation;
    if (operation == 1) {
        cout << "Masukkan bilangan alas: ";
        cin >> e;
        cout << "Masukkan bilangan tinggi: ";
        cin >> f;
        cout << "Masukkan bilangan sisi miring: ";
        cin >> g;
    } else if (operation == 2) {
        cout << "Masukkan bilangan panjang: ";
        cin >> a;
        cout << "Masukkan bilangan lebar: ";
        cin >> b;
    } else if (operation == 3) {
        cout << "Masukkan bilangan panjang: ";
        cin >> c;
        cout << "Masukkan bilangan lebar: ";
        cin >> d;
    } else if (operation == 0) {
        cout << "Program selesai";
    }

    switch (operation) {
        case 1:
        hitKeliling(e,f,g);
        break;
        case 2:
        hitKeliling(a,b);
        break;
        case 3:
        hitKeliling(c,d);
        break;
        default:
        cout << "Program Tidak ada";
        break;
    }
    return 0;
}