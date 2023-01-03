#include<stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;

int input_n();
Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);

int main(){
  int n; 
  Triangle smallest={0,0,0};
  n = input_n();
  Triangle t[n];
  input_n_triangles(n, t);
  find_n_areas(n, t);
  smallest = find_smallest_triangle(n,  t);
  output(n, t, smallest);
  return 0;
}
int input_n(){
  int n;
  printf("Enter the size of the array");
  if(scanf("%d", &n))
  return n;
}
Triangle input_triangle(){
  Triangle t;
  printf("Enter the base of triangle: ");
  if(scanf("%f", &t.base))
  printf("Enter the altitude of triangle: ");
  if(scanf("%f", &t.altitude))
  return t;
}
void input_n_triangles(int n, Triangle t[n]){
  for(int i=0; i<n; i++){
    t[i] = input_triangle();
  }
}
void find_area(Triangle *t){
  t->area=((t->base)*(  t->altitude))*0.5;
}
void find_n_areas(int n, Triangle t[n]){
  Triangle a;
  for (int i = 0; i<n; i++){
    a = find_area(t[i]);
    }
}
Triangle find_smallest_triangle(int n, Triangle t[n]){
  Triangle smallest={0,0,0};
  smallest.area = t[1].area;
  for(int i=0; i<n; i++){
    if(t[i].area <= smallest.area){
      smallest.area = t[i].area;
    }
  }
  return smallest;
}
void output(int n, Triangle t[n], Triangle smallest){
  printf("The smallest triangle out of triangle with base and height ");
  for(int i=0; i<n; i++){
    printf("(%d, %d), ", (int)t[i].base,(int)t[i].altitude);
  printf("is the triangle having base %d, height %d and area %d", (int)t[i].base,(int)t[i].altitude,(int)t[i].area);}
}
