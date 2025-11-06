#include <iostream>
#include <limits>
#include <cmath>

#define int_l numeric_limits<int>
#define float_l numeric_limits<float>
#define double_l numeric_limits<double>
#define bool_l numeric_limits<bool>

using namespace std;


int main()
{
  int byte_to_bits = 1 * 8;
  cout << "Range of int is from " << int_l::min() << " to " << int_l::max() << endl;
  cout << "Range of float is from " << float_l::min() << " to " << float_l::max() << endl;
  cout << "Range of double is from " << double_l::min() << " to " << double_l::max() << endl;
  cout << "Range of char is from " << 0 << " to " << pow(2,byte_to_bits)-1 << endl;
  cout << "Range of bool is from " << bool_l::min() << " to " << bool_l::max() << endl;

  cout << 
}
