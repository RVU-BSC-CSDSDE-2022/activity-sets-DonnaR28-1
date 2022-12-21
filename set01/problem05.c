#include<stdio.h> //take contents of stdio.h file and put it in the output file 
int input(); //function prototype ==> to check whether the function call passes the right number of arguments and type of arguments.
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);
int main(){
  int a, b, c, largest;
  a = input();
  b = input();
  c = input();
  largest = compare(a,b,c);
  output(a,b,c,largest);
}
int input(){
  int a;
  printf("Enter a number: ");
  if(scanf("%d",&a));
  return a;
}
int compare(int a, int b, int c){
  return a>b?(a>c?a:c):(b>c?b:c); // ? is to chech whether it is true or not.
}
void output(int a, int b, int c, int largest){
  printf("The largest of %d, %d and %d is %d \n", a, b, c, largest);
}