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

int hitKeliling(int a, int b) {
    int result = a+b;
    cout << "Keliling : " << result << endl;
    return result;
}

double hitKeliling(double a, double b) {
    double result = a+b;
    cout << "Keliling : " << result << endl;
    return result;
}

float hitKeliling(float a, float b, float c) {
    float result = a+b+c;
    cout << "Keliling : " << result << endl;
    return result;
}

void showDesc(string desc) {
    cout << "Masukan Pilihan" << endl;
    cout << "1. Hitung " << desc << " Persegi" << endl;
    cout << "2. Hitung " << desc << " Persegi Panjang" << endl;
    cout << "3. Hitung " << desc << " Segitiga" << endl;
}

int main() {
    int a, b, operation, operation2;
    double c, d;
    float e, f, g;
    string desc, option;


    do {
        cout << "Masukan Pilihan" << endl;
        cout << "1. Hitung Luas" << endl;
        cout << "2. Hitung Keliling" << endl;
        cout << "Pilihan: ";
        cin >> operation;

        switch (operation) {
        case 1:
            desc = "Luas";
            showDesc(desc);
            break;
        case 2:
            desc = "Keliling";
            showDesc(desc);
            break;
        default:
            break;
        }

        cout << "Pilihan: ";
        cin >> operation2;
        if (operation == 1 || operation2  == 2) {
            cout << "Masukkan bilangan sisi 1: ";
            cin >> a;
            cout << "Masukkan bilangan sisi 2: ";
            cin >> b;
        } else if (operation == 2 && operation2 == 2) {
            cout << "Masukkan bilangan panjang: ";
            cin >> c;
            cout << "Masukkan bilangan lebar: ";
            cin >> d;
        } else if (operation == 2 && operation2 == 3) {
            cout << "Masukkan bilangan sisi 1: ";
            cin >> e;
            cout << "Masukkan bilangan sisi 2: ";
            cin >> f;
            cout << "Masukkan bilangan sisi 3: ";
            cin >> g;
        } else {
            cout << "Pilihan Tidak ada";
        }

        if (operation == 1 && operation2 <= 2) {
            rectangleWide(a,b);
        } else if (operation == 1 && operation2 == 3) {
            triangleWide(a,b);
        } else if (operation == 2 && operation2 == 1) {
            hitKeliling(a,b);
        } else if (operation == 2 && operation2 == 2) {
            hitKeliling(c,d);
        } else if (operation == 2 && operation2 == 3) {
            hitKeliling(e,f,g);
        }
        cout << "Ulangi y/n? ";
        cin >> option;
        // system("cls");
    } while (option == "y" || option == "Y");
    cout << "Program Selesai";
    return 0;
}
