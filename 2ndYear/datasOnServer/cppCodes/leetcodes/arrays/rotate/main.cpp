#include<iostream>
using namespace std;

void rotateArr(int * arr,const int & size,int k){
    k = k % size;
    int newArr[size];
    for(int i = 0; i < size; i++){
        newArr[(i+k) % size]  = arr[i];
    }
    for(int i = 0; i < size; i++){
        arr[i] = newArr[i];
    }
}

void displayArr(const int * arr,const int size){
    for(int i = 0; i < size-1; i++){
        cout << arr[i] << ',';
    }
    cout << arr[size-1] << endl;
}

int main(){
    const int size = 5;
    const int k = 2;
    int arr[size] = {1,2,3,4,5};

    displayArr(arr,size);
    rotateArr(arr,size,k);
    displayArr(arr,size);
    
    return 0;
}
