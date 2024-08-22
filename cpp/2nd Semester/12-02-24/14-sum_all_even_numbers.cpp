#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  int sum = 0, count = 0;
  while (count <= 100) {
    count++;
    if (count % 2 == 0) {
      sum += count;
    }
  }
  cout << "Sum = " << sum;
  return 0;
}
