#include <bits/stdc++.h>
#include <chkg2a/fn_ll.h>
using namespace std;
using namespace chk;


vector<vector<string>> groupAnagrams(vector<string> & strs){
  unordered_map<string, vector<string>> map;  
  for(string x : strs){
    string temp = x;
    sort(temp.begin(),temp.end());
    map[x].push_back(x);
  }
  vector<vector<string>> ans;
  for(auto x : map){
      ans.push_back(x.second);
  }
  return ans;
}

int main () {
    vector<string> s = {"act", "pots","tops","cat","stop","hat"};
    for (auto x : groupAnagrams(s)){
        for (auto y: x) {
            cout << y << ',';
        }
    }

  return 0;
}
