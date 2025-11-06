#include <iostream>

using namespace std;

int main ()
{
  int x = 10, y= 45, z= 5, max;
  if (x > y && x > z){
    max = x;
  }else if (y > x && y > z){
    max = y;
  }else{
    max = z;
  }
  cout << max << " is the greatest number";
  return 0;
}
