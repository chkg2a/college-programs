#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;

bool isAnagram(string s, string t){
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s == t){
        return true;
    }
    return false;
}

int main(){
    string s = "racecar";
    string t = "carracre";
    cout << isAnagram(s,t);
    return 0;
}
