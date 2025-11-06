#include <iostream>
using namespace std;

int main() {
  int alloc[10][10], req[10][10];
  int avail[10], allocated[10], work[10], total[10], seq[10];
  int i, j, k, n, m;
  int count = 0, c = 0, f = 1;
  char finish[10];
  cout << "Enter the no. of processes: ";
  cin >> n;
  cout << "Enter the no. of resources: ";
  cin >> m;
  cout << "Enter total resource vector: ";
  for (j = 0; j < m; j++)
    cin >> total[j];
  for (i = 0; i <= n; i++)
    finish[i] = 'n';
  cout << "Enter the allocation matrix:\n";
  for (i = 0; i < n; i++)
    for (j = 0; j < m; j++)
      cin >> alloc[i][j];
  for (j = 0; j < m; j++)
    allocated[j] = 0;
  for (i = 0; i < n; i++)
    for (j = 0; j < m; j++)
      allocated[j] += alloc[i][j];
  for (j = 0; j < m; j++)
    avail[j] = total[j] - allocated[j];
  for (j = 0; j < m; j++)
    work[j] = avail[j];
  cout << "Enter the request matrix:\n";
  for (i = 0; i < n; i++)
    for (j = 0; j < m; j++)
      cin >> req[i][j];
  do {
    if (f == 0)
      break;
    f = 0;
    for (i = 0; i < n; i++) {
      c = 0;
      for (j = 0; j < m; j++)
        if ((req[i][j] <= work[j]) && (finish[i] == 'n'))
          c++;
      if (c == m) {
        cout << "\n\nThe needed resources can be allocated to Process P" << i;
        finish[i] = 'y';
        f = 1;
        cout << "\nand Process P" << i << " will be executed.";
        seq[count] = i;
        cout << "\nAvailable resources after completion of process P" << i
             << " are: ";
        for (k = 0; k < m; k++) {
          work[k] += alloc[i][k];
          cout << work[k] << " ";
        }
        count++;
      }
    }
  } while (count != n);
  if (count == n) {
    cout << "\n\nThe given system is not deadlocked and the execution sequence "
            "is: ";
    for (i = 0; i < n; i++)
      cout << "P" << seq[i] << ", ";
  } else {
    cout << "\n\nThe given system is deadlocked and the dead locked processes "
            "are: ";
    for (i = 0; i < n; i++)
      if (finish[i] == 'n')
        cout << "P" << i << ", ";
  }
  return 0;
}
