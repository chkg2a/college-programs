#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
  int dividend, divisor, result;

  cout << "Enter dividend: ";
  cin >> dividend;

  cout << "Enter divisor: ";
  cin >> divisor;

  try{
    if(divisor == 0){
      throw "Division by zero error";
    }
    result = dividend /divisor;
  }
  catch(const char* error){
    cerr << "Error: " << error << endl;
  }

  return 0;
}
