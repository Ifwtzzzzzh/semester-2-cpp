#include <iostream>
using namespace std;

void swap(int& x, int& y) {
  int temp = x;
  x = y;
  y = temp;
}

int main() {
  int a = 10;
  int b = 20;

  cout << "Before swap, value of a : " << a << endl;
  cout << "Before swap, value of b : " << b << endl;

  swap(a,b);

  cout << "Before swap, value of a : " << a << endl;
  cout << "Before swap, value of b : " << b << endl;
  
  return 0;
}