// Write a c+= program that reads integers frmom a file named numbers.txt, calculates their sum,and then writes the result to a file named sum.txt.

#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

int main (int argc, char *argv[]) {
  string numFile = "numbers.txt";
  ifstream inFile(numFile,ios::in); 
  ofstream outFile("sum.txt",ios::out);
  
  int numbers;
  int sum = 0;

  if(!inFile){
    cerr << "File not found";
    return 1;
  }
  if(!outFile){
    cerr << "File not found";
    return 1;
  }

  while(inFile >> numbers){
    sum += numbers;
  }

  outFile << sum;

  return 0;
}
