#include <iostream>

using namespace std;

class Point{
  int *x;
  int *y;
  public:
    Point(){
      x = new int;
      y = new int;
      *x = 4;
      *y = 10;
    }
    ~Point(){
      delete x;
      delete y;
    }
    void display(){
      cout << "x = " << *x << ", y = " << *y << endl;
    }
};

int main (int argc, char *argv[]) {
  Point p1; 
  p1.display();

  return 0;
}
