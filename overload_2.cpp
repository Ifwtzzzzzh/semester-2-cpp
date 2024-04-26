#include <iostream>
using namespace std;

int add(int a, int b) {
  return a+b;
}

float add(int a, int b, int c) {
  return a+b+c;
}

string add(string s1, string s2) {
  return s1+s2;
}

int main() {
  cout << "Sum of 2 and 3 is " << add(2,3) << endl;
  cout << "Sum of 1, 2, and 3 is " << add(2,3,4) << endl;
  string str1 = "Hello";
  string str2 = "World";
  cout << "Concatenated string: " << add(str1,str2) << endl;
  return 0;
}