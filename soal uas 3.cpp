#include <iostream>

using namespace std;

int main()
{
	string makanan = "sptr";
	string* sptr = &makanan;
	
	cout<< makanan <<endl;
	cout<< sptr <<endl;
	cout<<*sptr<<endl;

	return 0;
	
}
