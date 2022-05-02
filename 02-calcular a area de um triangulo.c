// programa para calcular a area de um triangulo
#include <stdio.h>

int main() {
  
  int a, b, h;
  
  printf("digite valor da base:");
  scanf("%d",&b);

  printf("digite valor da altura:");
  scanf("%d",&h);

  a = (b * h) / 2;
  
  printf("a area do triangulo é:%d\n",a);
  
  return 0;
}
