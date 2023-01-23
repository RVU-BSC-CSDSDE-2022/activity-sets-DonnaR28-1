#include<stdio.h>
#include<math.h>
void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);
int main(){
  float x1, x2, y1, y2, distance;
  input(&x1, &x2, &y1, &y2);
  distance = find_distance(x1, x2,y1, y2);
  output(x1,x2,y1, y2, distance);
  return 0;
}
void input(float *x1, float *x2, float *y1, float *y2){
  printf("enter the point1 value: ");
  if(scanf("%f %f",x1, y1));
  printf("Enter the point 2 value: ");
  if(scanf("%f %f",x2, y2));
}
float find_distance(float x1, float x2, float y1, float y2){
  float distance;
  distance = sqrt( (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1) );
  return distance;
}
void output(float x1, float x2, float y1, float y2, float distance){
  printf("The distance between point (%f, %f) and (%f, %f) is %f\n", x1, y1, x2, y2, distance);
}