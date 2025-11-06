#include <iostream>

class MyClass {
public:
  static int count;

  MyClass() {
    count++; // Increment count in the constructor
  }

  static int getCount() { return count; }
};

// Initialize static member outside the class (required in C++)
int MyClass::count = 0;

int main() {
  MyClass obj1;
  MyClass obj2;
  MyClass obj3;

  std::cout << "Number of objects created: " << MyClass::getCount()
            << std::endl;

  return 0;
}
