#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Course {
    string courseCode;
    string courseName;
    int sks;
    int grade;
};

struct Student {
    string NIM;
    string name;
    int numCourses;
    Course courses[3];
};

int main() {
    int numStudents;

    cout << "Jumlah Mahasiswa: ";
    cin >> numStudents;
    cin.ignore(); 

    Student students[numStudents];

    for (int i = 0; i < numStudents; i++) {
        cout << "\nInput NIM: ";
        getline(cin, students[i].NIM);
        cout << "Input Nama: ";
        getline(cin, students[i].name);
        cout << "Ambil Jumlah Matakuliah [1-3]: ";
        cin >> students[i].numCourses;
        cin.ignore(); 

        for (int j = 0; j < students[i].numCourses; j++) {
            cout << "\nInput Kode Matakuliah ke-" << (j + 1) << ": ";
            getline(cin, students[i].courses[j].courseCode);
            cout << "Input Matakuliah: ";
            getline(cin, students[i].courses[j].courseName);
            cout << "Jumlah SKS: ";
            cin >> students[i].courses[j].sks;
            cout << "Nilai: ";
            cin >> students[i].courses[j].grade;
            cin.ignore();
        }
    }
    
    cout << endl;
    cout << "==================================================================================================================" << endl;
  cout << "| NIM \t\t| Nama \t\t| Kode Kuliah \t| Mata Kuliah \t| SKS \t| Nilai |" << endl;
  for (int i=0; i<numStudents; i++) {
    for (int j=0; j<students[i].numCourses;j++) {
      if (j == 0) {
        cout << "| " << students[i].NIM << "\t";
        cout << "| " << students[i].name << "\t";
      } else {
      	cout << "\t\t\t\t";
	  }
      cout << "| " << students[i].courses[j].courseCode << "\t\t";
      cout << "| " << students[i].courses[j].courseName << "\t";
      cout << "| " << students[i].courses[j].sks << "\t";
      cout << "| " << students[i].courses[j].grade << "\t";
      cout << "| " << endl;
    }
    cout << "==================================================================================================================" << endl;
  }
    return 0;
}

