#include <iostream>
using namespace std;

float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
int mod(int c, int d);

int main() {
    float num1, num2;
    int num3, num4, operation;
    cout << "Masukkan Pilihan Anda" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "5. Modulus" << endl;
    cout << "0. Keluar" << endl;

    cout << "Pilih operasi: ";
    cin >> operation;
    if (operation != 0 && operation <= 4) {
        cout << "Masukkan bilangan 1: ";
        cin >> num1;
        cout << "Masukkan bilangan 2: ";
        cin >> num2;
    } else if (operation != 0 && operation == 5) {
        cout << "Masukkan bilangan 1: ";
        cin >> num1;
        cout << "Masukkan bilangan 2: ";
        cin >> num2;
    } else if (operation == 0) {
        cout << "Program Selesai";
        return 0;
    } else {
        cout << "Pilihan tidak ada";
        return 0;
    }

    switch (operation) {
            case 1:
            cout << "Hasil penjumlahan dari a dan b adalah: " << add(num1, num2) << endl;
            break;
            case 2:
            cout << "Hasil pengurangan dari a dan b adalah: " << subtract(num1, num2) << endl;
            break;
            case 3:
            cout << "Hasil perkalian dari a dan b adalah: " << multiply(num1, num2) << endl;
            break;
            case 4:
            cout << "Hasil pembagian dari a dan b adalah: " << divide(num1, num2) << endl;
            break;
            case 5:
            cout << "Hasil modulus dari a dan b adalah: " << mod(num3, num4) << endl;
            break;
        }
    return 0;
}

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

int mod(int c, int d) {
    return c % d;
}