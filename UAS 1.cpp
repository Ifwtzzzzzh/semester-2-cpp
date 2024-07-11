#include <iostream>
#include <string>
 
using namespace std;
 
class Komputer {
  public:
    string processor = "AMD Ryzen 7";
 
    string cekKomputer() {
      return "Ini berasal dari class Komputer";
    }
};
 
class Laptop: public Komputer {
  public:
    string merk = "Lenovo";
 
    string cekLaptop() {
      return "Ini berasal dari class Laptop";
    }
};
 
int main()
{
  Laptop laptopAndi;
 
  cout << laptopAndi.processor << endl;
  cout << laptopAndi.merk << endl;
  cout << laptopAndi.cekKomputer() << endl;
  cout << laptopAndi.cekLaptop() << endl;
 
  return 0;
}
