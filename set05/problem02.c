#include<stdio.h>
#include<math.h>
void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);
int main(){
  float radius, height, length, weight;
  input_camel_details(&radius, &height, &length);
  weight = find_weight(radius, height, length);
  output(radius, height, length, weight);
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
float find_weight(float radius, float height, float length){
  float weight;
  weight = 3.1415 * pow(radius, 3) * sqrt(height * length);
  return weight;
}
void output(float radius, float height, float length, float weight){
  printf("The weight of the camel with radius: %f, height: %f, length: %f is %f", radius, height, length, weight);
}