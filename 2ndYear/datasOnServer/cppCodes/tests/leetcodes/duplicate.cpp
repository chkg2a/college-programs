#include <bits/stdc++.h>
#include <chkg2a/fn_ll.h>
using namespace std;
using namespace chk;

bool hasDuplicate(vector<int> & num){
  unordered_set<int> set; 
  for(int x : num){
    if(set.find(x) != set.end()){
      return true;
    }
    set.insert(x);
  }
  return false;
}

int main () {
  vector<int> num = {3,2,1,3,4,5};
  cout << hasDuplicate(num);
  return 0;
}
