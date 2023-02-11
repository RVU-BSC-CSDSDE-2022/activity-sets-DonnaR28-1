#include<stdio.h>
void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);
int main(){
  char a[100], b[100];
  int index;
  input_string(a,b);
  index=sub_str_index(a,b);
  output(a,b,index);
  return 0;
}
void input_string(char* a, char* b){
  printf("Enter a string: ");
  if(scanf("%s", a));
  printf("Enter a substring: ");
  if(scanf("%s", b));
}
int sub_str_index(char* string, char* substring){
  int i=0,j=0;
  while (string[i]!='\0' ){
  
    if (string[i+j]==substring[j]){
      
      j++;
      if(substring[j]=='\0'){
        return i;
      }
    }
    else{
      j=0;
      i++;
    }
  }
  return -1;
}
void output(char *string, char *substring, int index){
  printf("The index of '%s' in '%s' is %d\n", substring, string, index);
}