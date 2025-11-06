#include <iostream>

using namespace std;

template<typename T>
void swapValues(T & x, T & y){
  T temp = x;
  x = y;
  y = temp;
}

int main (int argc, char *argv[]) {
  int x = 1; 
  int y = 5; 
  string text1 = "Hello";
  string text2 = "Bro";
  cout << "BEFORE SWAP" << endl;
  cout << "x = " << x << ", y = " << y << endl;
  cout << "text1 = " << text1 << ", text2 = " << text2 << endl;
  cout << "AFTER SWAP" << endl;
  swapValues(x,y);
  swapValues(text1,text2);
  cout << "x = " << x << ", y = " << y << endl;
  cout << "text1 = " << text1 << ", text2 = " << text2 << endl;

  return 0;
}
