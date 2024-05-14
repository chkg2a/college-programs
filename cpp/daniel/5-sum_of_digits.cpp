#include <iostream>

using namespace std;

void sum(int x, int y){
  int sum = x + y;
  cout << sum;
}

int main (int argc, char *argv[]) {
  int x = 2; 
  int y = 10;
  sum(x,y);
  return 0;
}
