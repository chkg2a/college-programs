#include <stdio.h>
#define MAX 3

int main(){
  int p[MAX], pri[MAX], bt[MAX], wt[MAX], tat[MAX];
  int i, j, n, temp;
  float wtavg, tatavg;

  printf("Please enter the number of process: ");
  scanf("%d", &n);

  for(i = 0; i < n; i++){
    p[i] = i;
    printf("Please enter the Burst & Priority for %d : ",i);
    scanf("%d%d",&bt[i], &pri[i]);
  }

  for(i = 0; i < n; i++){
    for(j = i + 1; j < n; j++){
      if(pri[i] > pri[j]){
        temp = bt[j];
        bt[j] = bt[i];
        bt[i] = temp;

        temp = pri[j];
        pri[j] = pri[i];
        pri[i] = temp;

        temp = p[j];
        p[j] = p[i];
        p[i] = temp;
      }
    }
  }
  
  wtavg = wt[0] = 0;
  tatavg = tat[0] = bt[0];

  for(i = 1; i < n; i++){
    wt[i] = wt[i - 1] + bt[i - 1];
    tat[i] = wt[i] + bt[i];
    wtavg += wt[i];
    tatavg += tat[i];
  }


  printf("wt avg : %f", wtavg / n);
  printf("tat avg : %f", tatavg / n);
  return 0;
}
