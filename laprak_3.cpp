#include <iostream>
#include <iomanip>
using namespace std;

struct Course {
  string courseCode;
  string courseName;
};

struct Students {
  int nim;
  string name;
  int score;
  int sks;
  int totalStudy;
  Course courses[3];
};

int main() {
  int n;
  cout << "Jumlah Mahasiswa : ";
  cin >> n;
  cout << endl;

  Students students[n];

	for (int i=0; i<n; i++) {
    cout << "Input NIM : ";
    cin >> students[i].nim;
    cout << "Input Nama : ";
    cin.ignore();
    getline(cin, students[i].name);
    cout << "Ambil Jumlah Matakuliah [1-3] : ";
    cin >> students[i].totalStudy;
    cout << endl;
    for (int j=0; j < students[i].totalStudy; j++) {
      cout << "Input Kode Matakuliah ke-" << (j+1) << " : ";
      cin >> students[i].courses[j].courseCode;
      cout << "Input Matakuliah : ";
      cin >> students[i].courses[j].courseName;
      cout << "Jumlah SKS : ";
      cin >> students[i].sks;
      cout << "Nilai : ";
      cin >> students[i].score;
      cout << endl;
    }
    cout << endl;
  }

  cout << "==================================================================================================================" << endl;
  cout << "| NIM \t\t| Nama \t\t| Kode Kuliah \t| Mata Kuliah \t| SKS \t| Nilai |" << endl;
  for (int i=0; i<n; i++) {
    for (int j=0; j<students[i].totalStudy;j++) {
      if (j == 0) {
        cout << "| " << students[i].nim << "\t";
        cout << "| " << students[i].name << "\t";
      } else {
      	cout << "\t\t\t\t";
	  }
      cout << "| " << students[i].courses[j].courseCode << "\t\t";
      cout << "| " << students[i].courses[j].courseName << "\t";
      cout << "| " << students[i].sks << "\t";
      cout << "| " << students[i].score << "\t";
      cout << "| " << endl;
    }
    cout << "==================================================================================================================" << endl;
  }
  return 0;
}
