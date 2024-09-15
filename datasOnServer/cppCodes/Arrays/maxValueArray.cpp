#include<iostream>

using namespace std;

int max_val(int [], int);

int main(){
    int size = 9;
    int arr[size] = {8,16,44,28,4,1,3,56,12};
    int largestVal = max_val(arr, size);
    cout << largestVal << endl;
    return 0;
}

int max_val(int arr[], int size){
    int maxValue = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] > maxValue){
            maxValue = arr[i];
        }
    }
    return maxValue;
}
