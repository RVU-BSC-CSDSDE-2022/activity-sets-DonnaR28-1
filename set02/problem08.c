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
  
}
int input_n(){
  int n;
  printf("Enter the size of the array");
  scanf("%d", &n);
  return n;
}
Triangle input_triangle(){
  Triangle t;
  printf("Enter the base of triangle: ");
  scanf("%f", &t.base);
  printf("Enter the altitude of triangle: ");
  scanf("%f", &t.altitude);
  return t;
}
void input_n_triangles(int n, Triangle t[n]){
  for(int i=0; i<n; i++){
    t[i] = input_triangle();
  }
}
void find_area(Triangle *t){
  t->area=((t->base)*(t->altitude))*0.5;
}
void find_n_areas(int n, Triangle t[n]){
  Triangle area={0,0};
  for (int i = 0; i<n; i++){
    area = find_area(&t)
  }
}
