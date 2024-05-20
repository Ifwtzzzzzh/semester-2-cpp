#include <iostream>
using namespace std;

void desc() {
	cout << "MENU" << endl;
	cout << "-------------------" << endl;
	cout << "1. Input Array" << endl;
	cout << "2. Lihat semua elemen array" << endl;
	cout << "3. Lihat elemen array yang diinginkan" << endl;
	cout << "4. Hapus array" << endl;
	cout << "5. Keluar" << endl;
	cout << "-------------------" << endl;
	cout << "Masukkan pilihan (1-5) : ";
}

void showAllArray(int *temp, int length) {
	cout << "Elemen array : " << endl;
	for (int j=0; j<length; j++) {
		cout << *(temp + j) << " ";
	}
	cout << endl << endl;
}

void showSelectedArray(int *temp, int index) {
	cout << "Elemen array yang ada di indeks ke-" << index 
	<< " adalah " << temp[index] << endl << endl;
}

void deleteArray(int *array) {
	cout << "Array telah dihapus !" << endl << endl;
	delete[] array;
}

int main() {
	int length, pilihan, choice, index;
	int array[length];
	bool empty = true;

    do {
        desc();
    	cin >> choice;
		cout << endl;
		if (choice == 1) {
			cout << "Masukkan jumlah array : ";
			cin >> length;
			cout << "Masukkan elemen array : " << endl;
			for (int i=0; i<length; i++) {
				cin >> *(array + i);
			}
			empty = false;
			cout << endl << "Array berhasil ditampilkan" << endl << endl;
		} else if (choice != 5 && empty == true) {
			cout << "Array belum diinisialisasi" << endl << endl;
		} else if (choice == 2) {
			showAllArray(array, length);
		} else if (choice == 3) {
			cout << "Masukkan indeks array yang ingin dilihat : ";
			cin >> index;
			showSelectedArray(array, index);
		} else if (choice == 4) {
			deleteArray(array);
			main();
		}
	} while (choice != 5);
	cout << "Program Telah Selesai :)";
    return 0;
}