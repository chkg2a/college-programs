#include <stdio.h>

int main() {
  int wt[20], bt[20], tat[20], ct[20];
  int i, n, j, t, temp = 0;
  float wtavg = 0, tatavg = 0;

  printf("Please enter the number of processes : ");
  scanf("%d", &n);

  printf("\nPlease enter the time slice : ");
  scanf("%d", &t);

  for (i = 0; i < n; i++) {
    printf("Enter the burst time for process %d : ", i);
    scanf("%d", &bt[i]);
    ct[i] = bt[i];
  }

  int max = bt[0];

  for(i = 0; i < (max / t) + 1; i++){
    for(j = 0; j < n; j++){
      if(bt[i] != 0){
        if(bt[i] <= t){
          tat[j] = bt[j] + temp;
          temp = bt[j] + temp;
          bt[j] = 0;
        }else {
          bt[j] = bt[j] - t;
          temp = temp + t;
        }
      }
    }
  }

  printf("wt avg : %f", wtavg / n);
  printf("tat avg : %f", tatavg / n);

  return 0;
}
