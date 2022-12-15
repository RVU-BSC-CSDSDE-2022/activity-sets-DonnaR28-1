#include<stdio.h>
int main(){
  char name[10];
  printf("Enter your name:");
  if(scanf("%s", name))
  printf("Hello %s Welcome to Replit\n", name);
  return 0;
}