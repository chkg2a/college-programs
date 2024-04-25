#include <iostream>

using namespace std;

class Time{
  private:
    int hour, minutes;
  public:
    Time(){
      hour = 0;
      minutes = 0;
    };
    Time(int & hour, int & min): hour(hour), minutes(min){};
    void convertToTime(int min){
      hour = min / 60;
      minutes = min % 60;
    }
    void displayTime(){
      cout << hour << ":"<< minutes << endl;
    }
};

int main () {
  Time time1; 
  int min = 75;
  time1.convertToTime(min);
  time1.displayTime();
  return 0;
};
