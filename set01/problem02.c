#include<stdio.h>
int main(){
  int a, b, sum;
  printf("enter two no's: \n");
  if(scanf("%d%d", &a,&b))
  sum = a + b;
  printf("The sum of %d and %d is %d", a, b, sum);
} 