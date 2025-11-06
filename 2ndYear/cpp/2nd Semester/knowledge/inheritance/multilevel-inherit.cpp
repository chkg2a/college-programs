#include <iostream>

using namespace std;

class Father{
  protected:
    string surname = "bro";
};

class Son: protected Father{
  string name = "chicken";
  public:
    void displayName(){
      cout << name << " " << this->surname;
    }
};

class GrandSon: protected Son{
  string name = "pasta";
  public:
    void displayName(){
      cout << name << " " << this->surname;
    }
};

int main (int argc, char *argv[]) {
  GrandSon son1; 
  son1.displayName();
  return 0;
}
