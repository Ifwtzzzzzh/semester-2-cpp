#include <iostream>
using namespace std;

double convertGrade(double presence, double task, double mid, double last) {
    presence = presence * 10 / 100;
    task = task * 25 / 100;
    mid = mid * 30 / 100;
    last = last * 35 / 100;
    double result = presence + task + mid + last;

    string grade;
    if (result > 80) {
        grade = "A";
    } else if (result > 70) {
        grade = "B";
    } else if (result > 60) {
        grade = "C";
    } else if (result > 50) {
        grade = "D";
    } else if (result <= 50) {
        grade = "E";
    }

    string passed;
    if (grade == "D" || grade == "E") {
        passed = "Tidak Lulus";
    } else {
        passed = "Lulus";
    }

    cout << "Nilai akhir anda adalah : " << result << endl;
    cout << "Grade anda : " << grade << endl;
    cout << "Anda dinyatakan : " << passed << endl;
    return result;
}

int main() {
    int nim;
    double presence, task, mid, last;
    string name;

    cout << "Masukkan NIM anda : ";
    cin >> nim;
    cout << "Masukkan nama anda : ";
    cin.ignore();
    getline(cin, name);
    cout << "Masukkan Nilai kehadiran : ";
    cin >> presence;
    cout << "Masukkan Nilai Tugas \t : ";
    cin >> task;
    cout << "Masukkan Nilai UTS \t : ";
    cin >> mid;
    cout << "Masukkan Nilai UAS \t : ";
    cin >> last;

    cout << "NIM anda adalah " << nim << ". Nama anda adalah " << name << endl;
    convertGrade(presence, task, mid, last);
    return 0;
}