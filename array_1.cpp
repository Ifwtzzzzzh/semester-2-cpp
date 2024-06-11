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
	int myArray[] = {1,2,3,4,5};
  int size = sizeof(myArray)/sizeof(int);
  int sum = sumArray(myArray,size);
  cout << "Sum of the array elements : " << sum << endl;
	return 0;	
}