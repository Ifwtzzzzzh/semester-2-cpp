#include <iostream>

using namespace std;

void Data(string nim, string nama) {
  cout << "NIM anda adalah: " << nim << endl;
  cout << "Nama anda adalah: " << nama << endl;
}

int main() {
  string nim, nama;

  cout << "Masukan NIM anda: ";
  cin >> nim;

  cout << "Masukan nama anda: ";
  cin.ignore();
  getline(cin, nama);

  Data(nim, nama);

  return 0;
}