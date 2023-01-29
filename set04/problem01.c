#include<stdio.h>
void input(int *num1, int *den1, int *num2, int *den2);
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den);
void output(int num1, int den1, int num2, int den2, int res_num, int res_den);
int main(){
  int num1, den1, num2, den2,res_num, res_den;
  input(&num1, &den1, &num2, &den2);
  add(num1, den1, num2, den2, &res_num, &res_den);
  output(num1, den1, num2, den2, res_num, res_den);
  return 0;
}
void input(int *num1, int *den1, int *num2, int *den2){
  printf("Enter the 1st fraction: ");
  if(scanf("%d %d",num1,den1));
  printf("Enter the second fraction: ");
  if(scanf("%d %d",num2, den2));
}
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den){
  *res_num=(num1*den2)+(den1*num2);
  *res_den=den1*den2; 
}
void output(int num1, int den1, int num2, int den2, int res_num, int res_den){
  int c, gcd_no;
  for(c=1; c <= res_num && c <= res_den; ++c)
    {
       if(res_num%c==0 && res_den%c==0)
          gcd_no = c;
    }
  printf("%d/%d + %d/%d = %d/%d\n",num1, den1, num2, den2, res_num/gcd_no, res_den/gcd_no);
}