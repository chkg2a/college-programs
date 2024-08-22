//Write a generic function swap( ) that swaps the values of any variables 
#include <iostream>

using namespace std;

template<typename T>
T add(T x, T y){
  return x + y;
}

int main (int argc, char *argv[]) {
  int x = 1.2; 
  int y = 4.5;
  cout << add(x,y);

  return 0;
}
