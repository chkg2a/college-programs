#include <iostream>

using namespace std;

class Point{
  int x, y;
  public:
    Point(){
      x = 0;
      y = 0;
    }
    void displayPoints(){
      cout << "x = " << x << ", y = " << y;
    }
};

int main (int argc, char *argv[]) {
  Point p1; 
  p1.displayPoints();
  return 0;
}
