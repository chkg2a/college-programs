#include <iostream>
using namespace std;

void towerOfHanoi(int n,char from, char to, char aux){
  if(n == 1){
    cout << "Move disk " << n << " from " << from << " to " << to << endl;
  }else{
    towerOfHanoi(n-1, from,  aux,  to);
    cout << "Move disk " << n << " from " << from << " to " << to << endl;
    towerOfHanoi(n-1,  aux,  to,  from);
  }
}

int main (int argc, char *argv[]) {
   
  towerOfHanoi(3, 'A', 'C', 'B');

  return 0;
}
