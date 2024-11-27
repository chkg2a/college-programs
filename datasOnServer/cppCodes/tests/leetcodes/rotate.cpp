#include<iostream>
#include<chkg2a/fn_utility.h>

void rotateArr(int * arr,const int & size,int k){
  k = k % size;
  int newArr[size];
  for(int i = 0; i < size; i++){
    newArr[i] = arr[(i + k) % size];
  }
  for(int i = 0; i < size; i++){
    arr[i] = newArr[i];
  }
}

int main(){
  const int size = 5;
  int arr[size] = {1,2,3,4,5};
  int k = 7;
  chk::display_arr(arr,size);
  rotateArr(arr,size,k);
  chk::display_arr(arr,size);
  return 0;
}
