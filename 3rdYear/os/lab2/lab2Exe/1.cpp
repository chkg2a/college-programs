#include <iostream>
using namespace std;

int main(){
  int max[20][20], need[20][20], alloc[20][20];
  int avail[20], allocated[20], total[20], work[20], seq[20];
  int count = 0, c = 0, f = 1;
  int n, m, i, j, k;
  char finish[20];

  cout << "Please enter the number of processess : ";
  cin >> n;
  cout << "Please enter the number of resources : ";
  cin >> m;
  cout << "Please enter the resources vector : ";
  for(i = 0; i < m; i++)
    cin >> total[i];

  cout << "Please enter the max matrix : \n";
  for(i = 0; i < m; i++)
    for(j = 0; j < m; j++)
      cin >> max[i][j];
  cout << "Please enter the alloc matrix : \n";
  for(i = 0; i < m; i++)
    for(j = 0; j < m; j++)
      cin >> alloc[i][j];

  for(i = 0; i < m; i++)
    finish[i] = 'n';
  for(i = 0; i < m; i++)
    allocated[i] = 0;
  for(i = 0; i < m; i++)
    for(j = 0; j < m; j++)
      allocated[i] += alloc[i][j];
  for(i = 0; i < m; i++)
    avail[i] = total[i] - allocated[i];
  for(i = 0; i < m; i++)
    work[i] = avail[i];
  for(i = 0; i < m; i++)
    for(j = 0; j < m; j++)
      need[i][j] = max[i][j] - alloc[i][j];

  do {
    if(f == 0)
      break;
    f = 0;
    for(i = 0; i < n; i++){
      c = 0;
      for(j = 0; j < m; j++)
        if((need[i][j] <= work[j]) == (finish[i] = 'y'))
          c += 1;
      if(c == m){
        cout << "The Needed resources are satisfied by Process " << i << " and it's running.";
        finish[i] = 'y';
        f = 1;
        seq[count] = i;
        for(k = 0; k < m; k++){
          work[k] += alloc[i][j];
          cout << work[k] << " ";
        }
        count += 1;
      }
    }
  } while(count != n);

  if(count == n){
    cout << "The correct sequence is : ";
    for(i = 0; i < m; i++)
      cout << "P" << seq[i] << ",";
  }else{
    cout << "It couldn't run";
  }

  return 0;
}
