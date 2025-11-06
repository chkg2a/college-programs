#include <bits/stdc++.h>
#include <chkg2a/fn_ll.h>
#include <unordered_map>
using namespace std;
using namespace chk;

vector<int> twoSum(vector<int> &num, int target) {
  unordered_map<int, int> umap;
  for (int i = 0; i < num.size(); i++) {
    if (umap.count(target - num[i])) {
      return {i, umap[target - num[i]]};
    }
    umap[num[i]] = i;
  }
  return {};
}

int main() {
  vector<int> num = {2,7,11,13};
  int target = 18;

  for (auto x : twoSum(num, target)) {
    cout << x << ',';
  }
  return 0;
}
