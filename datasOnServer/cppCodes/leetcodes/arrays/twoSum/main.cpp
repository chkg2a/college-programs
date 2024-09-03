#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>

using namespace std;

vector<int> twoSum(vector<int> & num, int target){
    unordered_map<int, int> umap;
    for(int i = 0; i < num.size(); i++){
        umap[num[i]] = i;
    }
    for (int i = 0; i < num.size(); i++){
        if(umap.count(target - num[i])){
            return {i, umap[target - num[i]]};
        }
    }

    return {};
}

int main(){
    vector<int> num = {3,4,5,6};
    int target = 7;

    for(auto x : twoSum(num, target)){
        cout << x << ',';
    }

    return 0;
}
