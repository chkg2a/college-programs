#include <iostream>

using namespace std;

int findFactorial(int n)
{
  int sum = 1;
  while( n >= 1){
    sum *= n ;
    n--;
  }
  return sum;
}

int main()
{
  int num = 5;
  cout << findFactorial(num);
}
