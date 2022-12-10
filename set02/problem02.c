#include<stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
int main(){
  int a, b, c, isscalene;
  printf("enter the length of the sides: \n");
  a = input_side();
  b = input_side();
  c = input_side();
  isscalene = check_scalene(a,b,c);
  output(a,b,c,isscalene);
}
int input_side(){
  int a;
  if(scanf("%d",&a));
  return a;
}
int check_scalene(int a, int b, int c){
  int isscalene;
  if(a == b && b==c){
    return 0; 
  }
  if(a==b || a==c || b==c){
    return 0;
  }
  if(a != b && b!=c && a!= c){
    return 1;
  }
  return isscalene;
}
void output(int a, int b, int c, int isscalene){
  if(isscalene == 1){
    printf("The triangle with sides %d, %d and %d is scalene\n", a, b, c);
  }
  if(isscalene == 0){
    printf("The triangle with sides %d, %d and %d is not scalene\n", a, b, c);}
}