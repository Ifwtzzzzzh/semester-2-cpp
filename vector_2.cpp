#include <iostream>
using namespace std;

int sumArray(vector<int> arr) {
  int sum = 0;
  for (int i=0; i<arr.size(); i++) {
    sum += arr[i];
  }
  return sum;
}

void inputData(vector<int> &arr) {
  for (int i=0; i<arr.size(); i++) {
    cout << "Masukkan angka ke " << i+1 << ":";
    cin >> arr[i];
  }
}

void inputData(vector<int> &arr) {
  for (int i=0; i<arr.size(); i++) {
    cout << "Angka ke " << i+1 << ":" << arr[i] << "\t";
  }
}

int main() {
  int angka;
  cout << "Masukan berapa angka :";
  cin >> angka;

  vector<int> myArray(angka);
  inputData(myArray);
  outputData(myArray);

  int sum = sumArray(myArray);
  cout << "\n Sum of the array elements " << sum;
	return 0;	
}