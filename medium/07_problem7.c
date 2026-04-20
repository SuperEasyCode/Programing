#include <stdio.h>

int main(){
  int i;

  printf("How much internet do you need?(GB) ");
  scanf("%d", &i);

  if(i>0 && i<=5){
    printf("Your package is: (Basic)");
  } else if(i>=6 && i<=20) {
    printf("Your package is: (Standard)");
  } else if(i>=21 && i<=50){
    printf("Your package is: (Premium)");
  } else {
    printf("Your package is: (Unlimited)");
  }
  return 0;
}