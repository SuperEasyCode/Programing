#include <stdio.h>

int main(){
  int n;

  printf("Enter you roll: ");
  scanf("%d", &n);

  if(n>0 && n<51){
    printf("A");
  } else if(n>50 && n<101){
    printf("B");
  } else if(n>100 && n<201){
    printf("C");
  }
  return 0;
}