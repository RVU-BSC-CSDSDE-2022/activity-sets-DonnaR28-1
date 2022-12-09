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
  scanf("%d",&a);
  return a;
}
int check_scalene(int a, int b, int c){
  int isscalene;
  if(a == b && b==c){
    return isscalene; 
  }
  if(a==b || a==c || b==c){
    return isscalene;
  }
  if(a != b && b!=c && a!= c){
    return isscalene;
  }
}
void output(int a, int b, int c, int isscalene){
  if(a != b && b!=c && a!= c){
    printf("The triangle with sides %d, %d and %d is scalene\n", a, b, c);
  }
  else{
    printf("The triangle with sides %d, %d and %d is not scalene\n", a, b, c);
  }
}