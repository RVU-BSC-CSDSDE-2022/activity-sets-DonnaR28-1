#include<stdio.h>
int input_number();
int is_prime(int n);
void output(int n, int result);
int main(){
  int n, result;
  n = input_number();
  result = is_prime(n);
  output(n, result);
  return 0;
}
int input_number(){
  int n;
  printf("Enter a number: ");
  if(scanf("%d", &n));
  return n;
}
int is_prime(int n){
  int p=0, flag = 0, i;
  p = n/2;
  for(i= 2; i <= p; i++)
    if(n %i == 0)
      flag = 1;
    else
      flag = 0;
  return flag;
}
void output(int n, int result){
 if(result == 0) 
    printf("%d is prime number\n", n);
  else
   printf("%d is not a prime number\n", n);
}