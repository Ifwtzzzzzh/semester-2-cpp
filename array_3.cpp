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
  cout << "Masukan berapa angka : ";
  cin >> n;
	int myArray[n];

  for (int i=0; i<n; i++) {
    cout << "Masukkan angka ke " << i+1 << ":";
    cin >> myArray[i];
  }

  for (int i=0; i<n; i++) {
    cout << "Angke ke " << i+1 << ":" << myArray[i] << "\t";
  }

  int size = sizeof(myArray) / sizeof(int);
  int sum = sumArray(myArray, size);
  cout << "Sum of the array elements " << sum;
	return 0;	
}