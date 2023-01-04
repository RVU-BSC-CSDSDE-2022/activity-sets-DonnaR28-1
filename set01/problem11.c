#include <stdio.h>
struct _complex {
  float real;
  float imaginary;
};
typedef struct _complex Complex;
Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);
int main() {
  Complex a, b, sum;
  a = input_complex();
  b = input_complex();
  sum = add_complex(a, b);
  output(a, b, sum);
}
Complex input_complex() {
  Complex c1;
  printf("Enter the real part: ");
  if (scanf("%f", &c1.real))
    printf("Enter the imaginary part: ");
  if (scanf("%f", &c1.imaginary))
    return c1;
}
Complex add_complex(Complex a, Complex b) {
  Complex sum;
  sum.real = a.real + b.real;
  sum.imaginary = a.imaginary + b.imaginary;
  return sum;
}
void output(Complex a, Complex b, Complex sum) {
  printf("The sum of %d+%di and %d+%di is %d+%di\n", (int)a.real,
         (int)a.imaginary, (int)b.real, (int)b.imaginary, (int)sum.real,(int)sum.imaginary);
}
