#include <iostream>

using namespace std;

int main () {
  int size = 5;
  int arr[size];
  try{
    // By mistake if for loop exceeds the maximum size
    // then it will throw an Exception
    // Array out of bounds
    for(int i = 0; i < size+1; i++){
      if(i >= size) {
        throw "Array out of bounds";
      }
      arr[i] = i;
    }
  }
  catch(const char * err){
    cout << err;
  }
  catch(...) {
    cout << "Unexpected Error Occurred";
  }
  // Without Exception handling the program would have
  // crashed and it won't reached this "program ends" section
  cout << "Program ends";

  return 0;
}
