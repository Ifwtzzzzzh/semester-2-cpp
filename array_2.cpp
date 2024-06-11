#include <iostream>
using namespace std;

int sumArray(int arr[], int size) {
  int sum = 0;
  for (int i=0; i<size; i++) {
    sum += arr[i];
  }
  return sum;
}

int main() {
  int n;
	int myArray[n];
  int size = sizeof(myArray)/sizeof(int);
  cout << "Masukan berapa angka";
  cin >> n;

  for (int i=0; i<n; i++) {
    cout << "Masukkan angke ke " << i+1 << ":";
    cin >> myArray[i];
    cout << myArray[i];
  }
  int sum = sumArray(myArray,n);
	return 0;	
}