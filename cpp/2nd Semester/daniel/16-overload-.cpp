#include <iostream>

using namespace std;

class Point{
  int x,y;
  public:
    Point(){
      x = 0;
      y = 0;
    }
    Point(int n1, int n2){
      x = n1;
      y = n2;
    }
    void display(){
      cout << "x = " << x << ", y = " << y << endl;
    }
    void operator-(int n){
      x -= n;
      y -= n;
    }
};

int main () {
  Point p1(8,6);
  // Post Increment
  p1 - 4;
  p1.display();

  return 0;
}
