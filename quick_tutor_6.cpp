#include <iostream>
using namespace std;

int main() {
    int b,k;
    cout << "Masukkan jumlah baris: ";
    cin >> b;
    cout << "Masukkan jumlah kolom: ";
    cin >> k;

    int matriks[b][k];
    cout << endl;
    cout << "Input Nilai Matriks" << endl;
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < k; j++) {
            cout << "Masukkan baris ke - " << i+1 << ", Kolom ke - " << j+1 << " : ";
            cin >> matriks[i][j];
        }
    }

    cout << endl;
    cout << "Input Nilai Matriks" << endl;
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < k; j++) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
