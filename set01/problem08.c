#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n],int sum);
int main(){
  int sum, n, a[n];
  printf("Input array size: ");
  n = input_array_size();
  input_array(n, &a[n]);
  sum = sum_n_array(n, &a[n]);
  output( n, &a[n], sum);
}
int input_array_size(){
    int n;
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n]){
  int i;
  printf("Input the array: \n");
  for(i=0; i<n; i++){
    scanf("%d", &a[i]);
    }
}
int sum_n_array(int n, int a[n]){
  int sum, i;
  for(i=0; i<n; i++){
    sum += a[i];
  }
  return sum;
}
void output(int n, int a[n],int sum){
  printf("The sum of the array ");
  for(int i=0; i<n;i++){
    printf("%d+", a[i]);
  }
  printf("is %d\n", sum);
    }