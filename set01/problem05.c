#include<stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);
int main(){
  int a, b, c, largest;
  a = input();
  b = input();
  c = input();
  largest = compare(a,b,c);
  output(a, b, c, largest);
}
int input(){
  int a;
  if(scanf("%d", &a));
  return a;
}
int compare(int a, int b, int c){
  if(a>b && a>c)
    return a;
  if(b>c && b>a)
    return b;
  else
    return c;
}
void output(int a, int b, int c, int largest){
  printf("the largest of %d, %d and %d is %d\n", a, b, c, largest);
}