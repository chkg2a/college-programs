#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class People{
  string name;
  int age;
  int sexy;
  public:
    void getData(){
      cout << "Enter name: ";
      getline(cin,name);
      cout << "Enter age: ";
      cin >> age;
      cout << "Enter sexyness: ";
      cin >> sexy;
      cin.ignore();
    }
    string outData(){
      string text = "Name: " + name + "\nAge: " + to_string(age) + "\nSexyness: " + to_string(sexy) + "\n\n-----------\n";
      return text;
    }
};

void handleFileInput(ifstream & input){
  string text;
  while(getline(input,text)) {
    cout << text << endl; 
  }
}

int main (int argc, char *argv[]) {
  for(int i = 0; i < argc; i++){
    cout << argv[i] << endl;
  }
  // People person[2];
  // for(int x = 0; x < 2; x++){
  //   person[x].getData();
  // }
  // ifstream iffile("output.txt");
  // handleFileInput(iffile);
  // ofstream file("output.txt",ios::app);
  // if(file.fail())
  // {
  //   cout<< "File error";
  // }
  // else{
  //   for(int x= 0; x < 2 ;x++){
  //     file << person[x].outData();
  //   }
  // }
  // file.close();
  return 0;
}
