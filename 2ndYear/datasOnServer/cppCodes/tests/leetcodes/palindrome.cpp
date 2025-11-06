#include<iostream>
using namespace std;

int isPalindrome(int number){
  int newNum = 0;
  while(number > newNum){
    newNum = newNum * 10 + number % 10;
    number /= 10;
  }
  return (newNum == number) || (newNum / 10 == number);
}

int main(){
  int number = 1234321;
  cout << isPalindrome(number);
  return 0;
}
