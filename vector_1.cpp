#include <iostream>
using namespace std;

int main() {
  vector<int> vec = {1,2,3,4,5};
  vec.push_back(6);
  vec.pop_back();
  cout << "Element at index 2 : " << vec[2] << endl;
  cout << "Element at index 3 : " << vec.at(3) << endl;
  vec[1] = 10;
  cout << "Vector elements : ";
  for (int &elem : vec) {
    cout << elem << " ";
  }
  cout << endl;
  cout << "Vector size : " << vec.size() << endl;
  vec.clear();
  cout << "Vector size after clear " << vec.size() << endl;
	return 0;	
}