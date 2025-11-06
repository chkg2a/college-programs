#include<iostream>
using namespace std;

void fibonacii(int n, int a, int b){
    if(n==0){
        return;
    }
    cout << a << "\t";
    int temp = a + b;
    a = b;
    b = temp;
    fibonacii(n-1, a, b);
}

int main(){
    fibonacii(10,0,1);
    return 0;
}
