#include <bits/stdc++.h>
#include <chkg2a/fn_ll.h>
using namespace std;
using namespace chk;

bool isAnagram(string s, string t){
  if(s.size() != t.size()) return false;

  char arr[26] = {0};
  for(char c : s){
    arr[c - '0']++;
  }
  for(char c : t){
    arr[c - '0']--;
  }
  for(int x : arr){
    if (x < 0){
      return false;
    }
  }
  return true;
}

int main () {
  string s = "racecar";
  string t = "carracer";
  cout << isAnagram(s, t);

  return 0;
}
