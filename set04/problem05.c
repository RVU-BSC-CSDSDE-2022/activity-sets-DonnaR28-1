#include<stdio.h>
int input_size();
void input_array(int n, int a[n]);
int find_largest_index(int n, int a[n]);
void output(int index);
int main(){
int n, index;
n = input_size();
int a[n];
input_array(n,a);
index = find_largest_index(n,a);
output(index);
return 0;
}
int input_size(){
int n;
printf("Enter the size of the array: ");
if(scanf("%d",&n));
return n;
}
void input_array(int n, int a[n]){
printf("Enter the array elements: ");
for(int i=0; i<n; i++ ){
if(scanf("%d", &a[i]));
}
}
int find_largest_index(int n, int a[n]){
int max = a[0];
int index = 0;
for(int i=1; i<n; i++){
if(a[i]>max){
max = a[i];
index = i;
}
}
return index;
}
void output(int index){
printf("the index of the largest number in the array is %d\n", index);
}
