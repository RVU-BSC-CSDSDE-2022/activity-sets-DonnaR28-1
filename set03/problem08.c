#include<stdio.h>
typedef struct point {
    float x,y;
} Point;


typedef struct polygon {
    int sides;
    point p[100];
    float perimeter;
} Polygon;

int input_n();
Point input_point(int n);
int input_polygon(Polygon *p);
float find_distance(Point a, Point b);
void find_perimeter(Polygon* p);
void output(Polygon p);
int main(){
  
  return 0;
}
int input_n(){
  int n;
  printf("Enter the number of sides of the polygon: ");
  if(scanf("%d", &n));
  return n;
}
Point input_point(int n){
  Point p;
  for(int i=0; i<n;i++){
    printf("Enter the coordinates of point %d (x, y)",i);
    if(scanf("%d %d",&p.x,&p.y));
  }
  return p;
}
int input_polygon(Polygon *p){
  p->sides = input_point(n);
}
float find_distance(Point a, Point b){
  return sqrt((b.x - a.x)*(b.x - a.x)+(b.y-a.y)*(b.y-a.y));
}
void find_perimeter(Polygon *p){
  p
}