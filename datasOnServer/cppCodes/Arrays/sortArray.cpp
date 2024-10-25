#include <iostream>
using namespace std;

void sortArr(int *, int);
void displayArr(int *, int);

int main () {
  const int size = 7;
  int arr[size] = {12,23,4,5,1,99,9};

  cout << "Before sorting : ";
  displayArr(arr,size);
  sortArr(arr,size);
  cout << "After sorting : ";
  displayArr(arr,size);

  return 0;
}

void sortArr(int * arr, int size){
  for(int i = 0; i < size; i++)  {
    for(int j = i+1; j < size; j++){
      if(arr[i] > arr[j]){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

void displayArr(int * arr, int size){
  cout << '[';
  for(int i = 0; i<size; i++){
    cout << arr[i] << ",";
  }
  cout << ']' << endl;
}
