#include<stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
int main(){
  int a, b, c, isscalene;
  a = input_side();
  b = input_side();
  c = input_side();
  isscalene = check_scalene(a, b, c);
  output(a, b, c, isscalene);
}
int input_side(){
  int n;
  printf("Enter the side of the triangle: ");
  if(scanf("%d", &n));
  return n;
}
int check_scalene(int a, int b, int c){
  if (a!= b && b!= c && c != a)
    return 1;
  else
    return 0;
}
void output(int a, int b, int c, int isscalene){
  if(isscalene == 1)
    printf("The triangle of sides %d, %d and %d is scalene\n", a, b, c);
  else
    printf("the triangle of sides %d, %d and %d is not scalene\n", a, b, c);
}