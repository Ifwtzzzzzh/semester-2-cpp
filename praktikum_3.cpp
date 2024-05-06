#include <iostream>
using namespace std;

int main() {
	const int max_size = 100;
	int numbers[max_size];
	int count;
	double sum = 0;
	
	cout << "Masukan jumlah angka (maksimal : " << max_size << " ) : " ;
	cin >> count;
	
	cout << "Masukan angka-angka tersebut" << endl;
	for (int i = 0; i < count; i++) {  
		cin >> numbers[i];
		sum += numbers[i];
	}
	
	double average = sum/count;
	cout << "Rata - rata dari angka angka tersebut adalah : " << average << endl;
	return 0;
}
