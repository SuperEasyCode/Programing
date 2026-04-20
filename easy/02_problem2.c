#include <stdio.h>
#include <math.h>

int main(){
  int i,n,sum=0;

  printf("Enter the value of n: ");
  scanf("%d", &n);

  for(i=3; i<=n; i+=3){
    sum += pow(i,2);
  }

  printf("Summation: %d", sum);
  return 0;
}