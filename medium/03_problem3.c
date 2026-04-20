#include <stdio.h>

int main(){
  int a=2,s=0;

  do {
    s = s+a;
    a = a+2;
  } while(a<=100);

  printf("Summation: %d", s);
  return 0;
}