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
      cout << name << " " << this->surname << endl;
    }
};

class Daughter: protected Father{
  string name = "pasta";
  public:
    void displayName(){
      cout << name << " " << this->surname << endl;
    }
};

int main (int argc, char *argv[]) {
  Son son[1];
  Daughter daughter[1];
  son[0].displayName();
  daughter[0].displayName();
  return 0;
}
