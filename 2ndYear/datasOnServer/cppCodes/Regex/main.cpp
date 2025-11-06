#include<iostream>
#include<regex>

using namespace std;

int main(){
    string a = "5GeeksForGeeks41";
    regex r("Geek[a-zA-Z]*");
    smatch m;

    regex_search(a,m,r);
    for(auto x : m){
        cout << x << " ";
    }
    return 0;
}
