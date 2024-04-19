#include <iostream>
using namespace std;

void myFunction(string fname, int age) {
    cout << fname << " Refnes. " << age  << " years old." << endl;
}

int main() {
    myFunction("Lian", 3);
    myFunction("Jenny", 14);
    myFunction("Anja", 30);
    
    return 0;
}