#include <stdio.h>
#include <math.h>

int main(){
  float i,n,sum=0;

  printf("Enter the value of n: ");
  scanf("%f", &n);

  for(i=1; i<=n; i+=3){
    sum = sum + (1/pow(i,2));
  }

  printf("Summation: %.2f", sum);
  return 0;
}