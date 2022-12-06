#include<math.h>
#include<stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);
int main()
{
  float n, sqrroot;
  printf("Enter number: ");
  n =input();
  sqrroot = square_root(n);
  output(n, sqrroot);
}
float input(){
  float n;
  scanf("%f",&n);
  return n;
}
float square_root(float n){
  float sqrroot, temp;
  sqrroot = n/2;
  temp = 0;
  while( sqrroot != temp){
    temp = sqrroot;
    sqrroot = (n/temp+temp)/2;
  }
  return sqrroot;
}
void output(float n, float sqrroot){
  printf("Square root of %f is %f", n, sqrroot);
}