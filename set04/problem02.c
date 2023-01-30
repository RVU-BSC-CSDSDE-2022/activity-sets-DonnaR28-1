#include<stdio.h>
typedef struct {
    int num, den;
} Fraction;
typedef struct{
    Fraction f1, f2, f3;
    int compare;
}Compare
Fraction input_fraction();
void compare();
void output();
int main(){
  
}
Fraction input_values(){
  Fraction f;
  if(scanf("%d %d",f.num, f.den));
  return f;
}
Compare input_fractions(){
  Compare c;
  printf("Enter a fraction: ");
  c.f1 = input_fraction();
  printf("Enter a fraction: ");
  c.f2 = input_fraction();
  printf("Enter a fraction: ");
  c.f3 = input_fraction();
  return c;
}
void compare(Compare *c){
  if(c->f1.num/c->f1.den > c->f2.num/c->f2.den && c->f1.num/c->f1.den > c->f3.num/c->f3.den)
     c-> compare =c->f1.num/c->f1.den;
  if(c->f2.num/c->f2.den > c->f1.num/c->f1.den && c->f2.num/c->f2.den > c->f3.num/c->f3.den)
    c->compare = c->f2.num/c->f2.den;
  else
    c->compare = c->f3.num/c->f3.den;
}
void output(Compare c){
  printf("The smallest of %d/%d, %d/%d and %d/%d is %d/%d")
}
