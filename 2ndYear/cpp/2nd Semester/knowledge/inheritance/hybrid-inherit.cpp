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

class Daughter: protected Father{
  string name = "pasta";
  public:
    void displayName(){
      cout << name << " " << this->surname;
    }
};

class Infant: protected Son, protected Daughter{
  string name = "tandoori";
  public:
    void displayName(){
      cout << name<< endl;
    }
};

int main (int argc, char *argv[]) {
  Infant infant;
  infant.displayName();
  Daughter daughter;
  daughter.displayName();
  return 0;
}
