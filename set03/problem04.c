#include<stdio.h>
int input();
int find_fibo(int n);
void output(int n, int fibo);
int main(){
  int n, fibo;
  n = input();
  fibo = find_fibo(n);
  output(n, fibo);
}
int input(){
  int n;
  printf("Enter a number: ");
  if(scanf("%d", &n));
  return n;
}
int find_fibo(int n){
  int t1=0, t2=1, nxtterm=0, i;
  if(n == 0 || n == 1){
    return n;
  }
  else{
    nxtterm = t1 + t2;
    for(i = 3; i<=n+1; ++i){
      t1 = t2;
      t2 = nxtterm;
      nxtterm = t1 + t2;
    }
    return t2;
  }
}
void output(int n, int fibo){
  printf("fibo(%d) = %d\n",n, fibo);
}