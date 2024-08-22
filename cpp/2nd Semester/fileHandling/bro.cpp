#include <iostream>
#include <fstream>

using namespace std;

int main (int argc, char *argv[]) {
  string text;
  ifstream inputFile(argv[1]);
  while(getline(inputFile,text)){
    cout << text << endl;
  }
  return 0;
}
