#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string> & strs){
    unordered_map<string, vector<string>> umap;
    for(auto x : strs){
        string temp = x;
        sort(temp.begin(), temp.end());
        umap[temp].push_back(x);
    }
    vector<vector<string>> ans;
    for(auto x : umap){
        ans.push_back(x.second);
    }
    return ans;
}

int main(){
    vector<string> s = {"act", "pots","tops","cat","stop","hat"};
    for (auto x : groupAnagrams(s)){
        cout << '[';
        for (auto y: x) {
            cout << y << ',';
        }
        cout << ']';
    }
    return 0;
}
