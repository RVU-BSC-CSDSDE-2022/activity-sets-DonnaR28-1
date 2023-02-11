#include<stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);
int main(){
  int n, result;
  n = input_number();
  result = is_composite(n);
  output(n, result);
  return 0;
}
int input_number(){
  int n;
  printf("Enter a number: ");
  if(scanf("%d", &n));
  return n;
}
int is_composite(int n){
  int isprime=0, result;
  for(int counter=2; counter<= n/2;counter++){
    if(n%counter == 0)
      isprime = 1;
  }
  if (isprime == 1)
    return 1;
  if (isprime == 0)
    return 0;
}
void output(int n, int result){
  if(result == 1)
    printf("%d is a composite number\n", n);
  else
    printf("%d is not a composite\n",n);
}