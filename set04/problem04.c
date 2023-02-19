#include<stdio.h>
int input_degree();
void input_coefficients(int n, float a[n]);
float input_x();
float evaluate_polynomial(int n, float [n], float x);
void output(int n, float a[n], float x, float result);
int main(){
int degree = input_degree();
float coefficients[degree+1];
input_coefficients(degree, coefficients);
float x = input_x();
float result = evaluate_polynomial(degree, coefficients, x);
output(degree, coefficients, x, result);
return 0;
}
int input_degree(){
int degree;
printf("Enter the degree of the polynomial: ");
if(scanf("%d", &degree));
return degree;
}
void input_coefficients(int n, float a[n]){
printf("Enter the coefficients of the polynomial: ");
for(int i=0; i<=n; i++){
if(scanf("%f", &a[i]));
}
}
float input_x(){
float x;
printf("Enter the value of x: ");
if(scanf("%f", &x));
return x;
}
float evaluate_polynomial(int n, float a[n], float x){
float result = a[n];
for(int i=n-1; i>=0; i--){
result = result * x + a[i];
}
return result;
}
void output(int n, float a[n], float x, float result){
printf("THe polynomial: ");
for(int i=n; i>1; i--){
printf("%.2f x^%d + ", a[n-i], i);
}
printf("%.2f x + %.2f ", a[n], a[n-1]);
printf("evaluated at x = %.2f is %.2f\n", x, result);
}

