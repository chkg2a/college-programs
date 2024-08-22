#include <iostream>

using namespace std;

class Shape{
  string name;
  public:
    Shape(string n): name(n){}
    virtual void Display_Area() = 0;
    // virtual void Display_Area(){
    //   cout << "Area of " << name << " " ; 
    // }

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
  Shape *sp[3];
  Rectangle R1("Rectangle",2.0,3.0),R2("Rectangle",5.0,3.0),R3("Rectangle",2.0,9.0);;
  Triangle *tp = new Triangle("Triangle",2.0,3.0);
  sp[0] = &R1;
  sp[1] = &R2;
  sp[2] = &R3;
  sp[0]->Display_Area();

  // sp = &(*tp);
  // sp->Display_Area();
  // sp = new Circle("Circle",5.0);
  // sp->Display_Area();
  // R.Display_Area();
  // T.Display_Area();
  // Rectangle * rp = &R;
  // Circle * C = new Circle("Circle", 5);
  // C->Display_Area();
  // (*C).Display_Area();
  return 0;
}
