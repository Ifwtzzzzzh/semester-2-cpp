#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>  // for standard exception handling

using namespace std;

// Fungsi untuk menyimpan data ke dalam file
void saveToFile(const string& nim, const string& nama, double nilai) {
    ofstream FileKu(nim + "_" + nama + ".txt");
    if (FileKu.is_open()) {
        FileKu << "NIM: " << nim << endl;
        FileKu << "Nama: " << nama << endl;
        FileKu << "Nilai: " << nilai << endl;
        FileKu.close();
    } else {
        throw runtime_error("Tidak bisa buka file");
    }
}

void readFile(const string& nim, const string& nama) {
    string mytext;
    ifstream FileKu(nim + "_" + nama + ".txt");
    if (FileKu.is_open()) {
        while (getline(FileKu, mytext)) {
            cout << mytext << endl;
        }
        FileKu.close();
    } else {
        throw runtime_error("Tidak bisa buka file");
    }
}

int main() {
    string nim, nama;
    double nilai;

    try {
        cout << "Masukkan NIM: ";
        cin >> nim;
        cout << "Masukkan Nama: ";
        cin.ignore();
        getline(cin, nama);
        cout << "Masukkan Nilai: ";
        cin >> nilai;

        if (nilai < 0 || nilai > 100) {
            throw out_of_range("Nilai diluar range");
        }

        saveToFile(nim, nama, nilai);
        cout << "Data berhasil disimpan ke file." << endl;
        readFile(nim, nama);

    } catch (const out_of_range& e) {
        cout << e.what() << endl;
    } catch (const runtime_error& e) {
        cout << e.what() << endl;
    } catch (const exception& e) {
        cout << "ADA ERROR GUYS: " << e.what() << endl;
    } catch (...) {
        cout << "Error tidak diketahui" << endl;
    }

    return 0;
}

