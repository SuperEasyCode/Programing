#include <stdio.h>

int main(){
  int sum = 0;
  int array[6] = {7,10,45,20,51,23};

  for(int i=0; i<6; i++){
    sum = sum + array[i];
  }

  printf("Summation: %d", sum);
  return 0;
}