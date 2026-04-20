#include <stdio.h>

int main(){
  int i,n, product=1;

  printf("Enter the value of n: ");
  scanf("%d", &n);

  for(i=1; i<=n; i++){
    product *= i;
  }

  printf("Product of the series: %d", product);
  return 0;
}