#include <iostream>

using namespace std;

void check_leap_year(int year){
  if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) ){
    cout << year << " is a leap year.";
  }
  else{
    cout << year << " is not a leap year.";
  }
}

int main (int argc, char *argv[]) {
  int year;
  cout << "Please enter a year to check: ";
  cin >> year;
  check_leap_year(year);
  return 0;
}
