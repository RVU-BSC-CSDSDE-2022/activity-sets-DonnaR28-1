#include<stdio.h>
void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float heigth, float length);
void output(float radius, float heigth, float length, int mood);
int main(){
  float radius, height, length, weight;
  int mood;
  input_camel_details(&radius, &height, &length);
  mood = find_mood(radius, height, length);
  output(radius, height, length, mood);
  return 0;
}
void input_camel_details(float *radius, float *height, float *length){
  printf("Enter the camel stomach radius: ");
  if(scanf("%f",radius));
  printf("Enter height of camel: ");
  if(scanf("%f", height));
  printf("Enter length of camel: ");
  if(scanf("%f", length));
}
int find_mood(float radius, float length, float height){
  int mood;
  if(radius<height && radius<length)
    mood = 0;
  if(height<length && height<radius)
    mood = 1;
  if(length<height && length<radius)
    mood = 2;
  return mood;
}
void output(float radius, float height, float length, int mood){
  if(mood == 0)
    printf("The Camel is Sick\n");
  if(mood == 2)
    printf("The Camel is Happy\n");
  if(mood == 1)
    printf("The Camel is Tense\n");
}