#include <iostream>

using namespace std;

class Shape{
  protected:
  double x;
  double y;
  public:
    virtual void getData(){
      x = 0;
      y = 0;
    }
    virtual void display(){
      cout << x * y;
    };
};

class Rectangle: public Shape{
  public:
    virtual void getData(){
      cout << "Please enter the length: ";
      cin >> x;
      cout << "Please enter the breadth: ";
      cin >> y;
    }
    virtual void display(){
      cout << "Area of Rectangle is " <<  x * y << endl;
    };
  
};
class Triangle: public Shape{
  public:
    virtual void getData(){
      cout << "Please enter the base: ";
      cin >> x;
      cout << "Please enter the height: ";
      cin >> y;
    }
    virtual void display(){
      cout << "Area of Triangle is " << 0.5* x * y << endl;
    };

};

int main (int argc, char *argv[]) {
  Shape * sp = new Triangle;
  int x;
  cout << "Do you want to initialize Triangle or Rectangle (1/2): ";
  cin >> x;
  if (x == 1){
    sp = new Triangle;
  }
  else if(x == 2){
    sp = new Rectangle;
  }
  else{
    cout << "Please enter a correct number 1 or 2";
    return 1;
  }
  sp->getData();
  sp->display();
  return 0;
}
