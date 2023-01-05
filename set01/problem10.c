#include<stdio.h>
void input_two_strings(char *str1, char *str2);
int stringcompare(char *str1, char *str2);
void output(char *str1, char *str2, int result);
int main(){
  int result;
  char str1[100];
  char str2[100];
  input_two_strings(str1,str2);
  result = stringcompare(str1, str2);
  output(str1, str2, result);
}
void input_two_strings(char *str1, char *str2){
  printf("Enter a string: ");
  if(scanf("%s", str1));
  printf("Enter another string: ");
  if(scanf("%s", str2));
}
int stringcompare(char *str1, char *str2){
  int i = 0;
  for(int i=0; str1[i]!='\0' && str2[i]!='\0'; i++){
    if(str1[i] > str2[i])
      return 1;
    if(str2[i] > str1[i])
      return -1;
  }
  if (str1[i]>str2[i])
    return 1;
  if(str2[i]>str1[i])
    return -1;
  return 0;
}
void output(char *str1, char *str2, int result){
  if (result == 1)
    printf("%s is greater\n", str1);
  if(result == -1)
    printf("%s is greater\n", str2);
  else
    printf("%s and %s is same\n", str1, str2);
}