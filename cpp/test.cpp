#include <iostream>
#include <vector>

using namespace std;

int main (int argc, char *argv[]) {
  vector<int> arr = {1,2,3};
  for (int i = 0; i < arr.size();i++){
    if (i == arr.size()-1){
      cout << arr[i] << ", ";
    }
  }

  return 0;
}
