#include <iostream>

using namespace std;

class Father{
  protected:
    string surname = "bro";
};

class Mother{
  protected:
    string money = "Rs 10";
};

class Son: protected Father, protected Mother{
  string name = "chicken";
  public:
    void displayName(){
      cout << name << " " << this->surname << endl;
    }
    void displayMoney(){
      cout << money;
    }
};

int main (int argc, char *argv[]) {
  Son son1; 
  son1.displayName();
  son1.displayMoney();
  return 0;
}
