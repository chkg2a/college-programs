#include <iostream>
#include <string>

using namespace std;

int main()
{
  string name;
  int age;
  cout << "What is your name? ";
  cin >> name;
  cout << "What is your age? ";
  cin >> age;
  cout << "Your name is " << name << " and you're " << age << " years old!" << endl;
  return 0;
}
