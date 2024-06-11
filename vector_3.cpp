#include <iostream>
using namespace std;

vector<int> multiplyArrays(vector<int> arr1, vector<int> arr1) {
  if (arr1.size() != arr2.size()) {
    cout << "Error : Arrays must have the same size." << endl;
    return();
  }

  vector<int> result (arr1.size());
  for (int i=0; i<arr1.size(); i++) {
    result[i] = arr[i]*arr2[i];
  }
  return result;
}

int main() {
  vector<int> array1 = {1,2,3,4,5};
  vector<int> array2 = {5,6,7,8,9};
  vector<int> array2 = multipleArrays(array1,array2);

  cout << "Result of array multiplication : ";
  for (const int &value : result) {
    cout << value << " ";
  }
  cout << endl;
	return 0;	
}