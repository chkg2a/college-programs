#include <iostream>
using namespace std;

int main () {
  string number;
  cout << "Please enter a number : ";
  cin >> number;
  int * arr = new int;
  int size = 0;

  for(int i = 0; i < number.size(); i++){
    size++;
    if(i == number.size() - 1){
      arr[i] = ((int) number[i] - '0')+1;
      continue;
    }
    arr[i] = (int) number[i] - '0';
  }

  for(int i = 0; i < size; i++){
    cout << arr[i];
  }

  return 0;
}
