#include <iostream>
using namespace std;

void addition(int& a, int& b) {
  a*=2;
  b*=2;
}

void penambahan(int a, int b) {
  a*=2;
  b*=2;
}

int main() {
  int x=5;
  int y=4; int z;
  penambahan(x,y);
  cout << "by value nailai x=" << x << ", nilai y=" << y << endl;
  addition(x,y);
  cout << "by value nailai x=" << x << ", nilai y=" << y << endl;
  return 0;
}