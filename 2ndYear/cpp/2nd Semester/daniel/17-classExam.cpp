#include <iostream>

using namespace std;

class Student{
  protected:
  string name;
  int rollNo;
  public:
    Student(){}
    Student(string n, int r){
      name = n;
      rollNo = r;
    }
    void getStudentData(){
      cout << "What is the name of the Student: ";
      cin >> name;
      cout << "What is the roll number of the Student: ";
      cin >> rollNo;
    }
};
class Exam : public Student{
  protected:
  int marksObtained[6];
  int subjects = 6;
  public:
    Exam(){}
    void getMarks(){
      for(int i = 0; i < subjects ; i++){
        cout << "Marks obtained on Subj " << i+1 << " = ";
        cin >> marksObtained[i];
      }
    }
};
class Result : public Exam{
  int totalMarks = 0;
  public:
    Result(){}
    void calTotalMarks(){
      for (int i = 0; i < subjects ; i++){
        totalMarks += marksObtained[i];
      }
    }
    void getTotalData(){
      getStudentData();
      getMarks();
      calTotalMarks();
      cout << name << " has got " << totalMarks << endl;
    } 
};

int main (int argc, char *argv[]) {
  Result results;
  results.getTotalData();
  return 0;
}
