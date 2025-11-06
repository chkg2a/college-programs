#include <iostream>
using namespace std;

int main() {
  int MS, ms, bs, nob, ef, n, os = 1024, mp[10], tif = 0;
  int i, p = 0;
  cout << "Enter the total memory available (in Bytes): ";
  cin >> MS;
  ms = MS - os;
  if (ms >= 0) {
    cout << "Enter the block size (in Bytes): ";
    cin >> bs;
    nob = ms / bs;
    ef = ms % bs;
    cout << "\nEnter the number of processes: ";
    cin >> n;
    for (i = 0; i < n; i++) {
      cout << "Enter memory required for process " << i << " (in Bytes): ";
      cin >> mp[i];
    }
    cout << "\nNo. of Blocks available in memory: " << nob;
    cout << "\n\nPROCESS \t MEMORY REQUIRED\t ALLOCATED\t INTERNAL FRAGMENTATION ";
        for (i = 0; i < n && p < nob; i++) {
      cout << "\n " << i << "\t\t\t " << mp[i];
      if (mp[i] > bs)
        cout << "\t\t\tNO\t\t";
      else {
        cout << "\t\t\tYES\t\t " << bs - mp[i];
        tif = tif + bs - mp[i];
        p++;
      }
    }
    if (i < n)
      cout << "\nMemory is Full, Remaining Processes cannot be accomodated";
    cout << "\n\nTotal Internal Fragmentation is: " << tif;
    cout << "\nTotal External Fragmentation is: " << ef;
  } else
    cout << "The availbal memory is not sufficient";
  return 0;
}
