#include <iostream>

using namespace std;

int divide(int dividend, int divisor){
  int remainder;
  try {
    if(divisor == 0){
      throw 0;
    }
    remainder = dividend / divisor;
  }
  catch(int x){
    cout << "Cannot divide by Zero" << endl;
  }
  return remainder;
}

int main (int argc, char *argv[]) {
  int x = 10;
  int y = 0;
  cout << x << " / " << y << " = " << divide(x, y) << endl;
  return 0;
}
