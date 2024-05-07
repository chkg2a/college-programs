#include <iostream>

using namespace std;

template<typename T>
T add(T & x, T & y){
  return x+y;
}

int main (int argc, char *argv[]) {
  float x = 3.1;
  float y = 4.5;
  cout << add(x,y);

  return 0;
};
