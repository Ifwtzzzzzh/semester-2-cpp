#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char lab[15];
    char duplikat[15];

    cout << "Input Karakter -> ";
    cin >> lab;

    strcpy(duplikat, lab);
    cout << "Karakter yang diduplikat : " << duplikat << endl;
    cout << "Panjang Karakter : " << strlen(lab) << endl;
    cout << "Karakter dibalik : " << strrev(lab) << endl;
    cout << "Karakter diubah ke huruf besar : " << strupr(lab) << endl;
    cout << "Karakter diubah ke huruf kecil : " << strlwr(lab) << endl;

    strrev(lab);
    strupr(lab);
    for (int i = 0; i < strlen(lab); i++) {
      for (int s = i+1; s < strlen(lab); s++) {
        cout << " ";
      }
      for (int j = 0; j <= i; j++) {
        cout << lab[j];
      }
      cout << endl;
    }

    strrev(lab);
    strlwr(lab);
    for (int i = 0; i <= strlen(lab); i++) {
      for (int s = 0; s < i; s++) {
        cout << " ";
      }
      for (int j = i; j <= strlen(lab); j++) {
        cout << lab[j];
      }
      cout << endl;
    }
    return 0;
}