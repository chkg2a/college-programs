#include <iostream>

using namespace std;

int get_choice() {
  int choice = 0;
  do {
    if (choice > 4 || choice < 0) {
      cout << "\n--Please enter a correct option--\n\n";
    }
    cout << "Simple Calculator \n\
1 - Add two number\n\
2 - Sub two number\n\
3 - Multiply two number\n\
4 - Divide two number\n\
Please enter a choice : ";
    cin >> choice;

  } while (choice > 4 || choice < 0);
  return choice;
}
int add_two_number(int num1, int num2) { return num1 + num2; };
int sub_two_number(int num1, int num2) { return num1 - num2; };
int multiply_two_number(int num1, int num2) { return num1 * num2; };
float divide_two_number(float num1, float num2) { return num1 / num2; };

int main(int argc, char *argv[]) {
  int choice,num1, num2;
  choice = get_choice();
  cout << "Please enter a number : ";
  cin >> num1;
  cout << "Please enter another number : ";
  cin >> num2;

  switch (choice) {
  case 1:
    cout << "Adding two numbers = " << add_two_number(num1, num2);
    break;
  case 2:
    cout << "Subtracting two numbers = " << sub_two_number(num1, num2);
    break;
  case 3:
    cout << "Multiplying two numbers = " << multiply_two_number(num1, num2);
    break;
  case 4:
    cout << "Dividing two numbers = " << divide_two_number(num1, num2);
    break;
  default:
    cout << "FAILED UNEXPECTED";
    return 1;
  }
  return 0;
}
