#include<stdio.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
int main(){
  char a[100], b[100];
  input_string(a);
  str_reverse(a, b);
  output(a, b);
}
void input_string(char *a){
  printf("Enter a string: ");
  if(scanf("%s", a));
}
void str_reverse(char *str, char *rev_str){
  int i=0, j=0, len;
  for(i = 0; str[i]!='\0'; i++);
  len = i--;
  for(int i = len-1; i>=0; i--){
      rev_str[j] = str[i];
      j++;
    }
}
void output(char *a, char *reverse_a){
  printf("the reverse string is : %s\n", reverse_a);
}