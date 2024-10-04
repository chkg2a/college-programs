#include <iostream>
using namespace std;

int fibonacci(int n) {
  if (n <= 1) {
    return n;
  }
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(int argc, char *argv[]) {
  int result = fibonacci(5);
  cout << "Fibonacci = " << result << endl;

  return 0;
}
