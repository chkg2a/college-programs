#include <iostream>

using namespace std;

int revereseNum(int num){
  int reversed = 0;
  while (num != 0){
    reversed = (reversed * 10) + num % 10;
    num /= 10;
  }
  return reversed;
}

void reverseStr(string & str){
  int n = str.length();
  for(int i =0; i < n / 2; i++){
    swap(str[i],str[n - i - 1]);
  }
}

int main (int argc, char *argv[]) {
  // int n = 14123; 
  // cout <<n << " - " << revereseNum(n);
  string text = "hello world";
  cout << text << endl;
  reverseStr(text);
  cout << text << endl;
  return 0;
}
