#include<stdio.h>
#include<math.h>
struct camel{
  float radius, height, length, weight;
};
typedef struct camel Camel;

Camel input();
void find_weight(Camel *c);
void output(Camel c);
int main(){
  Camel c;
  c = input();
  find_weight(&c);
  output(c);
  return 0;
}
Camel input(){
  Camel c;
  printf("Enter the stomach radius: ");
  if(scanf("%f",&c.radius));
  printf("Enter the height of camel: ");
  if(scanf("%f", &c.height));
  printf("Enter the length of camel: ");
  if(scanf("%f", &c.length));
  return c;
}
void find_weight(Camel *c){
  c->weight = 3.1415 * pow(c->radius, 3) * sqrt(c->height * c->length);
}
void output(Camel c){
  printf("The weight of the camel with radius: %f, height: %f, length: %f is %f", c.radius, c.height, c.length, c.weight);
}