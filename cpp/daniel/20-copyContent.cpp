#include <iostream>
#include <fstream>

using namespace std;

int main (int argc, char *argv[]) {
  string inputFileName, outputFileName;
  string permaText, text;
  cout << "Enter the name of the file you want to copy from: ";
  cin >> inputFileName;
  cout << "Enter the name of the file you want to save the content to: ";
  cin >> outputFileName;
  
  ifstream inputFile(inputFileName);
  while(getline(inputFile,text)){
    permaText += text + "\n";
  }

  inputFile.close();

  ofstream outputFile(outputFileName);
  outputFile << permaText;

  outputFile.close();

  return 0;
}
