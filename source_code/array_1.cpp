#include <iostream>
#include <string>
using namespace std;

int main() {
    int n=0, item=0;
    cout << "Masukkan total barang: ";
    cin >> item;
    
    string namaBarang[item];
    int jumlahBarang[item];
    int hargaBarang[item];
    
    do {
        cout << "Nama barang ke-" << n+1 << ": ";
        cin.ignore();
        getline(cin, namaBarang[n]);
        cout << "Jumlah barang ke-" << n+1 << ": ";
        cin >> jumlahBarang[n];
        cout << "Harga barang ke-" << n+1 << ": ";
        cin >> hargaBarang[n];
        n++;
    } while (n < item);
    
    cout << "=========Stok Barang=========" << endl;
    cout << "Nama Barang \t Jumlah Barang \t Harga Barang" << endl;
    
    for (int i=0; i<item; i++) {
        cout << namaBarang[i] << "\t\t\t\t" << jumlahBarang[i] << "\t\t\t\t" << hargaBarang[i] << endl;
    }
    return 0;
}