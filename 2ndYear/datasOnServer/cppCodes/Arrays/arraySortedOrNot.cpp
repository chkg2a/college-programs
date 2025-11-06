#include<iostream>
using namespace std;

int main(){
    int size = 4;
    int arr[4] = {1,2,4,3};
    for(int i = 0; i < size-1; i++){
      if(arr[i] > arr[i+1]){
          cout << "Array is not sorted";
          return 0;
      }
    }
    cout << "Array is sorted";

    return 0;
}
