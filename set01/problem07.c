#include<stdio.h>
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);
int main(){
  int n,i, sum=0;
  printf("enter the 'n' no. of terms you want to calculate:\n");
  n = input_n();
  sum = sum_n_nos(n);
  output(n, sum);
}
int input_n(){
  int n;
  scanf("%d", &n);
  return n;
}
int sum_n_nos(int n){
  int i, sum;
  for(int i = 1; i <= n; i++){
    sum += i;
  }
  return sum;
}
void output(int n, int sum){
  printf("the sum of %d terms is %d\n", n, sum);
}