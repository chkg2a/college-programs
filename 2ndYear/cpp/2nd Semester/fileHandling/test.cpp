#include <iostream>
#include <vector>

using namespace std;
vector<int> helloworld = {123,2};

class A{
  public:
    virtual void printText() = 0;
    A(){}
};

class B : public A{
  public:
    B(){
      this->printText();
    }
    B(B & rhs){
      
    }
    virtual void printText(){
      cout << "Printing..." << endl;
    };
    void operator=(int x){
      cout << "Asssigning";
    }
};

int main(int argc, char * argv[]) {
  A * objA = new B;
  B objB;
  B objB2;
  objB = 2;
  // objA->printText();
  return 0;
}
