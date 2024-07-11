#include <iostream>
using namespace std;

class CRectangle {
    int x, y;
  public:
    void set_values (int,int);
    int area(){
	return (x*y)
	;}
};

void CRectangle::set_values (int a, int b) {
   x= a;
   y= b;
}

int main () {
  CRectangle rect, rectB;
  rect.set_values (3,4);
  rectB.set_values (5,6);
  
  cout << "hasil variabel rect: " << rect.area();
  cout<<endl;
  cout << "hasil variabel rectB: " << rectB.area();
  return 0;
}
