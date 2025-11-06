#include <iostream>

using namespace std;

void checkPalindrome(int n){
  int reversed = 0;
  int num = n;
  while(num != 0){
    reversed = (reversed * 10) + num%10;
    num/=10;
  }
  if (reversed == n){
    cout << n << " is a palindrome number.";
  }
  else{
    cout << n << " is not a palindrome number.";
  }
}

int main (int argc, char *argv[]) {
  int num = 12345;
  checkPalindrome(num);
  return 0;
}
