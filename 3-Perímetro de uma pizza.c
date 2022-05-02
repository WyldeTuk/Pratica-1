//programa para calcular perímetro de uma pizza
#include <stdio.h>

int main() {

  const PI = 3.1416;
  int r;
  float p;
  printf("digite o valor de raio:");
  scanf("%d",&r);
  p = (2 * PI * r);

  printf("o perimetro da pizza é:%.f\n",p);
  return 0;
}
