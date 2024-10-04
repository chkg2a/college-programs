#include <iostream>
using namespace std;

int findMajorityElement(int *arr, int size) {
  int majority = -1;
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (count == 0) {
      majority = arr[i];
      count++;
    }else if(arr[i] == majority){
      count++;
    }else{
      count--;
    }
  }

  count = 0;
  for(int i = 0; i < size; i++){
    if(arr[i] == majority){
      count++;
    }
  }
  if(count > size/2){
    return majority;
  }else{
    return -1;
  }
}

int main(int argc, char *argv[]) {
  const int size = 5;
  int arr[size] = {2, 1, 1, 1, 2};
  int majority = findMajorityElement(arr, size);
  if(majority == -1){
    cout << "There is no majority" << endl;
  }else{
    cout << "Majority element : " << majority << endl;
  }

  return 0;
}
