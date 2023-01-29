#include<stdio.h>
typedef struct point {
    float start_end_x, start_end_y;
} Point;

typedef struct line {
    Point p;
    float distance;
} Line;

typedef struct polygon {
    int sides;
    Line l[100];
    float perimeter;
} Polygon;

int input_n();
Line input_line(int n);
void input_n_lines(int n, Line *l);
int input_polygon(Polygon *p);
float find_distance(Point a, Point b);
void find_n_distance(int n, Line *l);
void find_perimeter(Polygon* p);
void output(Polygon p);

int main(){
  int n;Line l;Polygon p;
  input_n_lines(n, &l);
  
  return 0;
}
int input_n(){
  int n;
  printf("Enter the number of sides of the polygon: ");
  if(scanf("%f",&n));
  return n;
}
Line input_line(int n){
  Line l;
  for(int i=0;i<n;i++){
    printf("Enter the coordinates of point %d (x,y):",n);
    if(scanf("%d %d",&l.p.start_end_x,&l.p.start_end_x));
  }
  return l;
}
void input_n_lines(int n, Line *l){
  for(int i=0;i<n;i++){
    *l = input_line(n);
  }
}
int input_polygon(Polygon *p){
  
}
