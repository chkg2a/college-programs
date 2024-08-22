#include <iostream>

using namespace std;

void reverse_number(int *n){
  int x = 0, y;
  while (*n > 0 ){
    y = *n % 10;
    x = (x + y) * 10;
    *n = *n / 10;
  }
  *n = x / 10;
}

int main (int argc, char *argv[]) {
  int num = 2517;
  cout << "Before Reverse : " << num << endl;
  reverse_number(&num);
  cout << "After Reverse : " << num << endl;
  return 0;
}
