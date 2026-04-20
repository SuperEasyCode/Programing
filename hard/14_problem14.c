#include <stdio.h>
#include <math.h>

int main(){
  int i, sum=0;

  for(i=1; i<=45; i++){
    sum = sum + pow(i,(i-1));
  }
  printf("Summation: %d", sum);
  return 0;
}