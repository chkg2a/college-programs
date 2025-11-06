#include<chkg2a/fn_utility.h>
using namespace std;

void bubble_sort(int * arr, const int size){
  for(int i = 0 ; i < size; i++){
    bool swapped = false;
    for(int j = 0; j < size-1; j++){
      if(arr[j] > arr[j+1]){
        arr[j] ^= arr[j+1];
        arr[j+1] ^= arr[j];
        arr[j] ^= arr[j+1];
        swapped = true;
      }
    }
    if(!swapped)
      break;
  }
}

int main(){
  const int size = 7;
  int arr[size] = {5,1,9,7,4,12,8};
  chk::display_arr(arr,size);
  /*quickSort(arr,0,size-1);*/
  bubble_sort(arr,size);
  chk::display_arr(arr,size);

  return 0;
}
