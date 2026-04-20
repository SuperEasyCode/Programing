#include <stdio.h>

int main(){
  int i;
  int evenSum=0, oddSum=0;

  for(i=1; i<=40; i+=3){
    if(i%2==0) {
      evenSum = evenSum + i;
    } else {
      oddSum = oddSum + i;
    }
  }

  printf("Even Summation: %d\nOdd Summation: %d", evenSum, oddSum);
  return 0;
}