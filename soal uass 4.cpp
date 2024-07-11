#include <iostream>
#include <string>

using namespace std;

class Employee {
public:
    int id;          // Data member (juga variabel instance)
    string name;     // Data member (juga variabel instance)
    float salary;    // Data member (juga variabel instance)

    // Metode untuk memasukkan data ke dalam objek Employee
    void insert(int i, string n, float s) {
        id = i;
        name = n;
        salary = s;
    }

    // Metode untuk menampilkan data dari objek Employee
    void display() {
        cout << "ID: " << id << "  Name: " << name << "  Salary: " << salary << endl;
    }
};

int main() {
    // Membuat objek Employee
    Employee e1;
    Employee e2;

    // Menginisialisasi objek Employee
    e1.insert(201, "Upin", 990000);
    e2.insert(202, "Ipin", 29000);

    // Menampilkan data objek Employee
    e1.display();
    e2.display();

    return 0;
}

