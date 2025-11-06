#include <iostream>

using namespace std;

class Father{
  protected:
    string surname = "road";
};

class Son: protected Father{
  string name = "chicken";
  public:
    void displayName(){
      cout << name << " " << surname;
    }
};

int main (int argc, char *argv[]) {
  Son son1; 
  son1.displayName();
  return 0;
}
