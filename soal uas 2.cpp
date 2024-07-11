#include <iostream>

using namespace std;

int main() {
    // Inisialisasi variabel 'meal' dengan nilai 1
    int meal = 1;

    // Membuat referensi 'food' yang merujuk ke 'meal'
    int &food = meal;

    // Deklarasi pointer 'taste' tanpa inisialisasi
    int *taste;

    // Menampilkan nilai 'meal' yang awalnya 1
    cout << meal << endl;

    // Mengubah nilai 'meal' melalui referensi 'food'
    food = 2;

    // Menampilkan nilai 'meal' setelah diubah melalui 'food'
    cout << meal << endl;

    // Mengatur pointer 'taste' untuk merujuk ke alamat 'meal'
    taste = &meal;

    // Mengubah nilai 'meal' melalui dereferensi pointer 'taste'
    *taste = 3;

    // Menampilkan nilai 'meal' setelah diubah melalui 'taste'
    cout << meal << endl;

    return 0;
}

