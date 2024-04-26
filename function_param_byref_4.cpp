#include <iostream>
#include <string>
using namespace std;

void changeNormaly(double byval) {
  byval+=20;
}

void changeItByPointer(double* it) {
  *it+= 10.0;
}
void changeItByReference(double& it) {
  it+=10.0;
}

int main() {
  double it=5.5;
  changeNormaly(it);
  cout << "After first function execution, it = " << it << endl;
  changeItByPointer(&it);
  cout << "After first function execution, it = " << it << endl;
  changeItByReference(it);
  cout << "After first function execution, it = " << it << endl;

  return 0;
}