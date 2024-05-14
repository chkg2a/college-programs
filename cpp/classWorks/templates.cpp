#include <iostream>

using namespace std;

template<typename T>
T add(T x, T y='1'){
  return x+y;
}

template<typename T, typename U>
void printText(T value, U second){
  cout << value << '\t' << second << endl;
}

int main (int argc, char *argv[]) {
  float x = 3.1;
  float y = 4.5;
  cout << add('1') << endl;

  return 0;
};
