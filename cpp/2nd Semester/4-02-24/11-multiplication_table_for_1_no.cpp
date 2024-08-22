#include <iostream>
//chingkhei

using namespace std;

int main (int argc, char *argv[]) 
{
  int number;
  cout << "Multiplication Table for any number\n";
  cout << "Please enter a number: ";
  cin >> number;
  for (int i = 1; i <= 10; ++i )
  {
    cout << number << " x " << i << " = " << number * i << endl;
  }
  return 0;
}
