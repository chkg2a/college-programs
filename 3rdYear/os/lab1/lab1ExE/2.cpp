#include <stdio.h>

int main() {
  int p[20], wt[20], bt[20], tat[20];
  int i, n, j, temp;
  float wtavg, tatavg;

  printf("Please enter the number of processes : ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    p[i] = i;
    printf("Enter the burst time for process %d : ", i);
    scanf("%d", &bt[i]);
  }

  for (i = 0; i < n; i++){
    for (j = i + 1; j < n; j++){
      if(bt[i] > bt[j]){
        temp = bt[i];
        bt[i] = bt[j];
        bt[j] = temp;

        temp = p[i];
        p[i] = p[j];
        p[j] = temp;
      }
    }
  }

  wtavg = wt[0] = 0;
  tatavg = tat[0] = bt[0];

  for (i = 1; i <= n; i++) {
    wt[i] = wt[i - 1] + bt[i - 1];
    tat[i] = wt[i] + bt[i];
    tatavg += tat[i];
    wtavg += wt[i];
  }


  printf("wt avg : %f\n", wtavg / n);
  printf("tat avg : %f", tatavg / n);

  return 0;
}
