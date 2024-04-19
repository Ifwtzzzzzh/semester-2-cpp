#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void manipulateString(const string& name) {
    string reversedName = name;
    string upperCaseName = name;
    string lowerCaseName = name;
    
    cout << "Input Karakter : " << name << endl;
    cout << "Karakter yang diduplikat : " << name.length() << endl;
    reverse(reversedName.begin(), reversedName.end());
    cout << "Karakter yang dibalik : " << reversedName << endl;
    transform(upperCaseName.begin(), upperCaseName.end(), upperCaseName.begin(), ::toupper);
    cout << "Karakter diubah ke huruf besar : " << upperCaseName << endl;
    transform(lowerCaseName.begin(), lowerCaseName.end(), lowerCaseName.begin(), ::tolower);
    cout << "Karakter diubah ke huruf kecil : " << lowerCaseName << endl;
}

void loopString(const string& name, int length) {
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length - i; j++) {
            cout << " ";
        }
        string upperName = name.substr(0, i + 1);
        transform(upperName.begin(), upperName.end(), upperName.begin(), ::toupper);
        cout << upperName;
        cout << endl;
    }

    for (int i = length; i >= 0; i--) {
        for (int j = 0; j <= length - i; j++) {
            cout << " ";
        }
        string reversedName = name.substr(0, i);
        reverse(reversedName.begin(), reversedName.end());
        cout << reversedName;
        cout << endl;
    }
}

int main() {
    string name;
    cout << "Input Karakter -> ";
    cin >> name;
    cout << "================================================" << endl;
    manipulateString(name);
    loopString(name, name.length());
    
    return 0;
}
