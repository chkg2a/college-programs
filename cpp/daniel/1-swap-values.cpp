#include <iostream>

using namespace std;

int main() {
  int x = 5;
  int y = 10;
  cout << "x = " << x << ", y = " << y << endl;
  int temp = x;
  x = y;
  y = temp;
  cout << "x = " << x << ", y = " << y << endl;

  return 0;
}
