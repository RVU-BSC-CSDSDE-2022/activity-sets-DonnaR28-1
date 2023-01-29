#include<stdio.h>
#include<math.h>
typedef struct point {
    float x, y;
} Point;

typedef struct line {
    Point p1, p2;
    float distance;
} Line;

Point input_point();
Line input_line();
void find_length(Line *l);
void output(Line l);
int main(){
  Line l;
  l = input_line();
  find_length(&l);
  output(l);
  return 0;
}
Point input_point(){
  Point p;
  if(scanf("%f %f", &p.x,&p.y));
  return p;
}
Line input_line(){
  Line l;
  printf("Enter the value of the first point in a line: \n");
  l.p1 = input_point();
  printf("Enter the value of the first point in a line: \n");
  l.p2 = input_point();
  return l;
}
void find_length(Line *l){
  l-> distance = sqrt((l->p2.x - l->p1.x)*(l->p2.x - l->p1.x)+(l->p2.y - l->p1.y)*(l->p2.y - l->p1.y));
}
void output(Line l){
  printf("The distance between the points(%f, %f) and (%f, %f) and is %f\n",l.p1.x,l.p1.y,l.p2.x,l.p2.y,l.distance);
}
