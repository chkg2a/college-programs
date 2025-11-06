#include<stdio.h>
#include<stdlib.h>

int main(int argc, char ** argv){
  if(argc != 2){
    printf("Usage : printNatural N");
    return 1;
  }
  int N = atoi(argv[1]);

  for(int i = 0; i < N+1; i++){
    printf("%d\n",i);
  }
  return 0;
}
