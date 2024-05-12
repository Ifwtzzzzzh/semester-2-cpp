#include <iostream>
using namespace std;

int main() {
    int angka = 10;
    int *ptr;

    ptr = &angka;
    cout << "Nilai dari variabel angka : " << angka << endl;
    cout << "Alamat dari variabel angka : " << &angka << endl;
    cout << "Nilai yang ditunjuk oleh pointer : " << *ptr << endl;
    cout << "Alamat yang ditunjuk oleh pointer : " << ptr << endl;

    *ptr = 20;
    cout << "Setelah diubah melalui pointer, nilai variabel angka : " << angka << endl;
    return 0;
}