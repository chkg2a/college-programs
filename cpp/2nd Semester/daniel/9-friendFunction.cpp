#include <iostream>

using namespace std;

class Complex{
  int x, y;
  public:
    Complex(): x(0), y(0){}
    Complex(int n1, int n2){
      x = n1;
      y = n2;
    }
    void displayNum(){
      cout << "x = " << x << ", y = " << y << endl;
    }
    friend Complex addComplex(Complex obj, Complex obj2);
};

Complex addComplex(Complex obj, Complex obj2){
  Complex newObj;
  newObj.x = obj.x + obj2.x;
  newObj.y = obj.y + obj2.y;
  return newObj;
}

int main (int argc, char *argv[]) {
  Complex c1(2,3); 
  Complex c2(5,7); 
  Complex c3;
  c3 = addComplex(c1,c2);
  c3.displayNum();
  return 0;
}
