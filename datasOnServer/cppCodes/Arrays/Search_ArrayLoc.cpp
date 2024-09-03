#include <iostream>
using namespace std;

int searchForEle(int [], int, int);

int main () {
  int size = 5;
  int arr[size] = {44,12,0,99,6};

  int target = 3;

  if(searchForEle(arr,size,target) != -1){
    cout << target << " is at " << searchForEle(arr,size, target);
  }
  else{
    cout << target << " not found." << endl;
  }

  return 0;
}

int searchForEle(int arr[], int size, int target){
  for (int i = 0; i < size; i++){
    if(arr[i] == target){
      return i;
    }
  }
  return -1;
}
