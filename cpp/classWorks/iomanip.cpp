#include <iostream>

namespace Decimal{
  void print(int num){
    std::cout << "Decimal: " << num << std::endl;
  }
}

namespace Hexadecimal{
  void print(int num){
    std::cout << "Hexadecimal: " << std::hex << num << std::endl;
  }
}

int main () {
  int num = 50; 
  Hexadecimal::print(num);

  return 0;
}
