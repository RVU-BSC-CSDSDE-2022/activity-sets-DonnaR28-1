#include<stdio.h>
void input(float *base, float *height);
void find_area(float base, float height, float *area);
void output(float base, float height, float area);
int main(){
   float area, base, height;  
   input(&base, &height);
   find_area(base, height, &area);
   output(base, height, area);
}
void input(float *base, float *height){
  printf("Enter the base: ");
  if(scanf("%f", base));
  printf("Enter the height: ");
  if(scanf("%f", height));
}
void find_area(float base, float height, float *area){
  *area = height*base*0.5;
}
void output(float base, float height, float area){
  printf("The area of triangle with base %.2f and base %.2f is %.2f ", base , height, area);
  }