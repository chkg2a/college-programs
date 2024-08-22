#include <ctime>
#include <iostream>
#include <limits>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <unordered_map>

using namespace std;

class Subjects {
public:
  string getSubjectName(int index) { return subjects[index]; }
  int getNumberOfSubjects() { return sizeof(subjects) / sizeof(subjects[0]); }

private:
  string subjects[5] = {"Maths", "Programming for Problem Solving", "Chemistry",
                        "Workshop", "Communication Skills"};
};

class Student : public Subjects {
public:
  Student() { assignName(); }
  void getRandomMarks() {
    srand(time(0));
    printf("Your mark has been assigned randomly sir!\n");
    for (int i = 0; i < getNumberOfSubjects(); ++i) {
      short int randomMark = rand() % 101;
      marks_obtained[getSubjectName(i)] = randomMark;
    }
  }
  void getMarks() {
    for (int i = 0; i < getNumberOfSubjects(); ++i) {
      getMarkForSpecificSub(i);
    }
  }

  void printMarks() {
    for (auto x : marks_obtained) {
      cout << this->name << " got " << assignGrade(x.second) << " " << x.second
           << " on " << x.first << endl;
    }
  }
  void evaluateResults() {
    short int sum_of_marks = 0;
    string npcDialouge1 = "It's time you better find a new home, as your "
                          "parents may have disowned you already!";
    string npcDialouge2 =
        "Atleast you still have a home, but be prepared for some spanking!";
    string npcDialouge3 = "Just keep pushing on :)";
    string npcDialouge4 = "Wow you're in the top percentile!";
    for (auto y : marks_obtained) {
      sum_of_marks += y.second;
    }
    if (sum_of_marks <= 0) {
      printf("%s\n", npcDialouge1.c_str());
    } else if (sum_of_marks <= 200) {
      printf("%s\n", npcDialouge2.c_str());
    } else if (sum_of_marks <= 400) {
      cout << npcDialouge3 << '\n';
    } else if (sum_of_marks <= 500) {
      cout << npcDialouge4 << endl;
    }
  }

private:
  string name;
  unordered_map<string, int> marks_obtained;
  void assignName() {
    cout << "Please enter your name - ";
    getline(cin, name);
  }
  void getMarkForSpecificSub(int i) {
    int mark_obtain;
    while (true) {
      cout << "Please enter your mark for " << getSubjectName(i) << " - ";
      cin >> mark_obtain;
      if (!cin || (mark_obtain > 100 || mark_obtain < -100)) {
        cout << "Please enter an integer between (-100 <= mark <= 100)" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        continue;
      } else {
        break;
      }
    }
    marks_obtained[getSubjectName(i)] = mark_obtain;
  }

  char assignGrade(int mark_obtain) {
    char grades[6] = {'S', 'A', 'B', 'C', 'D', 'F'};
    char grade;
    if (mark_obtain > 89) {
      grade = grades[0];
    } else if (mark_obtain > 69) {
      grade = grades[1];
    } else if (mark_obtain > 59) {
      grade = grades[2];
    } else if (mark_obtain > 44) {
      grade = grades[3];
    } else if (mark_obtain > 29) {
      grade = grades[4];
    } else {
      grade = grades[5];
    }
    return grade;
  }
};

int main() {
  static const char padder[] = "--------------------------";
  Student Joe;
  Joe.getRandomMarks();

  Student Smoe;
  Smoe.getRandomMarks();

  Joe.printMarks();
  printf("%s\n", padder);
  Smoe.printMarks();
  Joe.evaluateResults();
  Smoe.evaluateResults();
}
