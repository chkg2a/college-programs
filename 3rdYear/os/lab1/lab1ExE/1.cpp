#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  int wt[20], bt[20], tat[20];
  int n, i;
  float tatavg, wtavg;
  printf("Please enter the number of processes : ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    printf("Enter the burst time for process %d : ", i);
    scanf("%d", &bt[i]);
  }

  wtavg = wt[0] = 0;
  tatavg = tat[0] = bt[0];

  for (i = 1; i < n; i++) {
    wt[i] = bt[i - 1] + wt[i - 1];
    tat[i] = bt[i] + wt[i];
    wtavg += wt[i];
    tatavg += tat[i];
  }

  cout << "\t PROCESS \tBURST TIME \t WAITING TIME\t TURNAROUND TIME\n";

  for (i = 0; i < n; i++) {
    cout << "\n\t P" << i << " \t\t " << bt[i] << " \t\t " << wt[i] << " \t\t "
         << tat[i];
  }

  cout << "\nAverage Waiting Time: " << wtavg / n;
  cout << "\nAverage Turnaround Time: " << tatavg / n;

  return 0;
}
