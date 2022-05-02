//converter gigabytes em bytes
#include <stdio.h>
#include <math.h>

int main(){

float GB, B, valor;
  printf("insira o valor em GB:");
  scanf("%f",&GB);
  B = pow(1024,3);
  valor = GB * B;
  printf("valor em Byte é:%f\n",valor);
  return 0;
  
}
