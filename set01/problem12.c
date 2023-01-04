#include<stdio.h>
struct _complex {
float real;
float imaginary;
};
typedef struct _complex Complex;
int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);
int main(){
  int n; 
  Complex c[n], result={0,0};
  n = get_n();
  input_n_complex(n,c);
  result = add_n_complex(n, c);
  output(n, c, result);
}
int get_n(){
  int n;
  printf("Enter the size of the array: ");
  if(scanf("%d",&n))
  return n;
}
Complex input_complex(){
  Complex c1;
  printf("Enter the real part: ");
  if(scanf("%f", &c1.real))
  printf("Enter the imaginary part: ");
  if(scanf("%f", &c1.imaginary))
  return c1;
}
void input_n_complex(int n, Complex c[n]){
  for(int i = 0; i<n; i++){
    c[i] = input_complex();
  }
}
Complex add(Complex a, Complex b){
 Complex sum;
  sum.real = a.real+b.real;
  sum.imaginary = a.imaginary + b.imaginary;
  return sum;
}
Complex add_n_complex(int n, Complex c[n]){
  Complex result={0,0};
  for(int i = 0; i<n; i++){
    result = add(result, c[i]);
  }
  return result;
}
void output(int n, Complex c[n], Complex result){
  for(int i=0; i<n ; i++){
  printf("%d+%di", (int)c[i].real, (int)c[i].imaginary);}
  printf("is %d+%di\n", (int)result.real, (int)result.imaginary);
}

