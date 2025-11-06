#include <iostream>

using namespace std;

void sum_of_digits(int *n){
  int sum = 0;
  for (int i = 0, y = 0; *n > 0; i++){
    y = *n % 10;
    sum += y;
    *n = *n / 10;
  }
  *n = sum;
}

int main (int argc, char *argv[]) {
  int num = 694201337; 
  sum_of_digits(&num);
  cout << "Sum of digits = " << num;
  return 0;
}
