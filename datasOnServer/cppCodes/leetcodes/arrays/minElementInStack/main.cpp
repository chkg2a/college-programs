#include <iostream>
#include "stack.h"

using namespace std;

int main(){
    stack stk;
    stack minStk;
    const int size = 7;
    int arr[size] = {5,2,3,4,1,6,9};
    initializeStack(&stk);
    initializeStack(&minStk);

    for(int i = 0; i < size; i++){
        cout << arr[i] << ',';
        push(&stk,arr[i]);
        if(top(&stk) <= top(&minStk) || isEmpty(&minStk)){
            push(&minStk,arr[i]);
        }else{
            push(&minStk,top(&minStk));
        }
    }

    int lowestNumber = top(&minStk);
    cout << endl << "Lowest Numner = " << lowestNumber << endl;

    return 0;
}
