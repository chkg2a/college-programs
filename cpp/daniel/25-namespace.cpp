#include <iostream>

using namespace std;

namespace apple{
  void displayFruit(){
    cout << "I'm an apple" << endl;
  }
}

namespace orange{
  void displayFruit(){
    cout << "I'm an orange" << endl;
  }
}

int main (int argc, char *argv[]) {
  apple::displayFruit();
  orange::displayFruit();
  using namespace apple;
  displayFruit();

  return 0;
}
