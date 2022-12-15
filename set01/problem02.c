#include<stdio.h>
int main(){
  int a, b, sum;
  printf("Enter value for 'a': ");
  if(scanf("%d", &a))
  printf("Enter value for 'b': ");
  if(scanf("%d", &b))
  sum = a+b;
  printf("The sum of a = %d and b = %d is %d\n", a, b, sum);
  return 0;
}