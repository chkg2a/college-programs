#include <iostream>

using namespace std;

class Employee{
  protected:
  string name;
  int salary;
  public:
    Employee(){}
    void getName(){
      cout << "What is the name of Employee: ";
      cin >> name;
    }
    virtual void printDetails() = 0;
    virtual void getSalary() = 0;
};

class FullTimeEmployee : public Employee{
  public:
    FullTimeEmployee(){}
    void getSalary(){
      cout << "What is the Salary of the Employee: ";
      cin >> salary;
    }
    void printDetails(){
      cout << "Name of the Employee : " << name << endl;
      cout << "Salary of the Employee : " << salary << endl;
    }
};

int main (int argc, char *argv[]) {
  Employee * ep = new FullTimeEmployee;
  ep->getName();
  ep->getSalary();
  ep->printDetails();

  return 0;
}
