#include <iostream>
using namespace std;

int searchForEle(int [], int, int);

int main () {
  const int size = 5;
  int arr[size] = {44,12,0,99,6};

  int target, reNum;
  cout << "Orig Arr = ";
  for (int i = 0; i < size; i++){
    cout << arr[i] << ',';
  }
  cout << "\nPlease enter a number to search : ";
  cin >> target;
  
  cout << "\nPlease enter a number to replace " << target << " with : ";
  cin >> reNum;

  int results = searchForEle(arr,size,target);
  if(results == -1){
    cout << target << " not found." << endl;
    return 1;
  }
  arr[results]  = reNum;
  cout << "Modi Arr = ";
  for (int i = 0; i < size; i++){
    cout << arr[i] << ',';
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
