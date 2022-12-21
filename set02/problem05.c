#include<stdio.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);
int main(){
  int a, b, gcd;
  a = input();
  b = input();
  gcd = find_gcd(a,b);
  output(a,b,gcd);
  return 0;
}
int input(){
  int a;
  printf("Enter the a value: ");
  if(scanf("%d",&a))
  return a;
}
int find_gcd(int a, int b){
  int gcd;
  for(int i=1; i<=a && i<=b; i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd = i;
        }
    }
  return gcd;
}
void output(int a, int b, int gcd){
  printf("the hcf of %d and %d is %d\n",a,b,gcd);
}