#include <iostream>
using namespace std;

int main() {
    string newArray[2][3];
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            switch (j) {
                case 0:
                cout << "Masukkan Kode Produk ke-" << i+1 << ":";
                cin >> newArray[i][j];
                break;
                case 1:
                cout << "Masukkan Nama Produk ke-" << i+1 << ":";
                cin.ignore();
                getline(cin, newArray[i][j]);
                break;
                case 2:
                cout << "Masukkan Jumlah Produk ke-" << i+1 << ":";
                cin >> newArray[i][j];
                break;
            }
        }
    }
    cout << endl;
    cout << "Hasil inputan produk 2 dimensi" << endl;
    cout << "Kode Produk \t Nama Produk \t Jumlah Produk" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << newArray[i][j] << " \t\t\t\t\t";
        }
        cout << endl;
    }
    return 0;
}