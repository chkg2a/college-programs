#include<iostream>

using namespace std;

int factorial(int n){
    int x, y;
    if(n==0){
        return 1;
    }
    x = n -1;
    y = factorial(x);
    return (n*y);
}

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << "Factorial of " << n << " = " << factorial(n) << endl;
}
