#include<stdio.h>
int input_array_size();
void init_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);
int main(){
  int n;
  n = input_array_size();
  int a[n];
  init_array(n,a);
  erotosthenes_sieve(n, a);
  output(n, a);
  return 0;
}
int input_array_size(){
  int n;
  printf("Enter the array size: ");
  if(scanf("%d", &n))
  return n;
}
void init_array(int n, int a[n]){
  for(int i = 2; i <= n; i++)
	{
		a[i] = i;
	}
}
void erotosthenes_sieve(int n, int a[n]){
  int i, j;
  while((i*i)<= n){
    if(a[i] != 0){
      for(j=2; j<n; j++){
        if(a[i]*j > n)
          break;
        else
          a[a[i]*j]=0;
      }
    }
    i++;
  }
}
void output(int n, int a[n]){
  for(int i=2;i<=n;i++){
    if(a[i] !=0)
      printf("%d ", a[i]);
  }
  printf("\n");
}