#include<stdio.h>
typedef struct{
int num, den;
} Fraction;
Fraction input_fraction();
int find_gcd(int a, int b);
Fraction find_smallest_fraction(Fraction f1, Fraction f2, Fraction f3);
void output(Fraction f1, Fraction f2, Fraction f3, Fraction smallest);
int main(){
  Fraction f1, f2, f3, smallest;
  f1 = input_fraction();
  f2 = input_fraction();
  f3 = input_fraction();
  smallest = find_smallest_fraction(f1, f2, f3);
  output(f1, f2, f3, smallest);
  return 0;
}
Fraction input_fraction(){
  Fraction f;
  printf("Enter the numerator: ");
  if(scanf("%d", &f.num));
  printf("Enter the denominator: ");
  if(scanf("%d", &f.den));
  return f;
}
int find_gcd(int a, int b){
  int gcd;
  for(int i=1; i<=a && i<=b; i++){
    if(a%i == 0 && b%i == 0)
      gcd = i;
  }
  return gcd;
}
Fraction find_smallest_fraction(Fraction f1, Fraction f2, Fraction f3){
  Fraction org1, org2, org3;
  org1 = f1, org2=f2, org3=f3;
  if(f1.den == f2.den == f3.den){
    if(f1.num<f2.num && f1.num<f3.num)
      return f1;
    if(f2.num<f1.num && f2.num<f3.num)
      return f2;
    else
      return f3;
  }
  else{
    int gcd = find_gcd(f1.den, f2.den);
    gcd = (gcd, f3.den);
    int lcm = (f1.den*f2.den*f3.den)/gcd;
    f1.num = lcm/f1.num;
    f2.num = lcm/f2.num;
    f3.num = lcm/f3.num;
    f1.den = lcm;
    f2.den = lcm;
    if(f1.num<f2.num && f1.num<f3.num)
      return org1;
      if(f2.num<f1.num && f2.num<f3.num)
        return org2;
        else return org3;
  }
}
void output(Fraction f1, Fraction f2, Fraction f3, Fraction smallest){
  printf("The smallest of %d/%d, %d/%d and %d/%d is %d/%d\n", f1.num, f1.den, f2.num, f2.den, f3.num, f3.den, smallest.num, smallest.den);
}