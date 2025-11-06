#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

bool hasDuplicate(vector<int> & num){
    sort(num.begin(), num.end());
    for(int i = 0; i < num.size()-1; i++){
        if(num[i] == num[i+1]){
            return true;
        }        
    }
    return false;
}

int main(){
    vector<int> x = {1,2,3,3,4,5};
    cout << hasDuplicate(x);
}
