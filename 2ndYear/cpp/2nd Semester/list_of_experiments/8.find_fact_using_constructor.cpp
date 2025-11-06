#include <iostream>

using namespace std;

class Factorial {
public:
  Factorial(int number) { cout << findFactorial(number); }

private:
  int findFactorial(int number) {
    if (number == 1) {
      return 1;
    }
    return number * findFactorial(number - 1);
  }
};

int main(int argc, char *argv[]) {
  Factorial bruh(5);
  return 0;
}
