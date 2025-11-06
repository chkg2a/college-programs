#include<iostream>
#include<chkg2a/fn_utility.h>

using namespace std;

void merge(int arr[], const int size, int left, int mid, int right){
  const int n1 = mid - left + 1;
  const int n2 = right - mid;

  int L[n1] = {0};
  int R[n2] = {0};

  for (int i =0; i< n1; i++)
    L[i] = arr[i + left];
  for (int i =0; i< n2; i++)
    R[i] = arr[i + mid + 1];

  int i = 0, j = 0, k = left;
  while(i < n1 && j < n2){
    if(L[i] <= R[j])
      arr[k] = L[i++];
    else
      arr[k] = R[j++];
    k++;
  }

  while(i < n1)
    arr[k++] = L[i++];
  
  while(j < n2)
    arr[k++] = R[j++];
}

void mergeSort(int arr[], const int size, int left, int right){
  if(left < right){
    int mid = (left + right) / 2;

    mergeSort(arr, size, left, mid);
    mergeSort(arr, size, mid + 1, right);
    merge(arr,size,left,mid,right);
  }
}

int main(){
  const int size = 7;
  int arr[size] = {5,1,6,9,12,88,2};
  chk::display_arr(arr,size);
  mergeSort(arr, size, 0, size -1);
  chk::display_arr(arr,size);

  return 0;
}
