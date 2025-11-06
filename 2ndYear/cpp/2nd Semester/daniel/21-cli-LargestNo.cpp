#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
  if(argc != 5){
    cout << "Please enter all the numbers";
    return 1; 
  }
  int n1 = atoi(argv[1]);
  int n2 = atoi(argv[2]);
  int n3 = atoi(argv[3]);
  int n4 = atoi(argv[4]);
  if(n1 > n2 && n1 > n3 && n1 > n4){
    cout << n1 << " is the greatest";
  }
  else if(n2 > n1 && n2 > n3 && n2 > n4){
    cout << n2 << " is the greatest";
  }
  else if(n3 > n2 && n3 > n1 && n3 > n4){
    cout << n3 << " is the greatest";
  }
  else{
    cout << n4 << " is the greatest";
  }
  return 0;
}
