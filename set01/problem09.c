#include <math.h>
#include <stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);
int main() {
  float n, sqrroot;
  printf("Enter a value: ");
  n = input();
  sqrroot = square_root(n);
  output(n, sqrroot);
}
float input() {
  float n;
  if(scanf("%f", &n));
  return n;
}
float square_root(float n) {
  float s, x,y;
  s = n;
  x = 1;
  while(fabs(x * x -s )>0.0001){
    x = (x + s/x)/2;
  }
  return x;
}
void output(float n, float sqrroot) {
  printf("Square root of %.2f is %.2f\n", n, sqrroot);
}
