#include <iostream>
using namespace std;

int main() {
  int ms, MS, mp[10], i, os = 1024, temp, n = 0;
  char ch = 'y';
  cout << "Enter the total memory available (in Bytes): ";
  cin >> MS;
  ms = MS - os;
  if (ms >= 0) {
    cout << "Remaining memory after OS (size: 1024 bytes) allocation: " << ms;
    temp = ms;
    for (i = 0; ch == 'y'; i++, n++) {
      cout << "\n\nEnter memory required for process " << i << " (in Bytes): ";
      cin >> mp[i];
      if (mp[i] <= temp) {
        cout << "Memory is allocated for Process " << i;
        temp = temp - mp[i];
      } else {
        cout << "\nMemory is Full";
        break;
      }
      cout << "\nDo you want to continue(y/n): ";
      cin >> ch;
    }
    cout << "\n\nTotal Memory Available: " << ms;
    cout << "\n\nPROCESS\t\t MEMORY ALLOCATED ";
    for (i = 0; i < n; i++)
      cout << "\n " << i << "\t\t " << mp[i];
    cout << "\n\nTotal Memory Allocated is: " << ms - temp;
    cout << "\nTotal External Fragmentation is: " << temp;
  } else
    cout << "The availbal memory is not sufficient";
  return 0;
}
