#include <iostream>
#include <algorithm>


using namespace std;

template<typename T>
void findMax(T x, T y){
  T greater = (x > y) ? x : y;
  cout << greater << " is greater" << endl;
}

void reverseNum(int n ){
  int reversed;
}

int main (int argc, char *argv[]) {
  findMax(10.2,4.1);
  // findMax("apple","oranges");
  string x = "oranges";
  int y = 23123;
  // int sum = 0;
  // for (int i = 0; i < x.length();i++){
  //   sum+= (int)x[i];
  // }
  // cout << sum;
  reverse(x.begin(),x.end());
  cout << x;
  return 0;
}
