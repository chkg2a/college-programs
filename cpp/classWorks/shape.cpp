#include <iostream>
#include <ostream>

using namespace std;

class Shape{
  string name;
  public:
    Shape(string n): name(n){}
    virtual void Display_Area(){
      cout << "Area of " << name << " "; 
    }
};

class Rectangle: public Shape{
  string name;
  int length, bredth;
  public:
  Rectangle(string n, int l, int b):Shape(n), length(l), bredth(b){}
  void Display_Area(){
    Shape::Display_Area();
    cout << length* bredth << endl;
  }
};

class Triangle: public Shape{
  string name;
  int base, altitude;
  public:
  Triangle(string n, int b, int a):Shape(n), base(b), altitude(a){}
  void Display_Area(){
    Shape::Display_Area();
    cout << 0.5 *base* altitude <<endl;
  }
};

class Circle: public Shape{
  string name;
  int radius;
  public:
  Circle(string n, int r):Shape(n), radius(r){}
  void Display_Area(){
    Shape::Display_Area();
    cout << 3.14*radius * radius <<endl;
  }
};

int main (int argc, char *argv[]) {
  Rectangle R("Rectangle",2.0,3.0);
  Shape *sp = &R;
  sp->Display_Area();
  // R.Display_Area();
  // Triangle T("Triangle",2.0,3.0);
  // T.Display_Area();
  // Rectangle * rp = &R;
  // Circle * C = new Circle("Circle", 5);
  // C->Display_Area();
  // (*C).Display_Area();
  return 0;
}
