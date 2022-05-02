//programa pra calcular os impostos incluídos no preço de um produto
#include <stdio.h>

int main(){

float ICMS, COFINS, PIS, PF, Pi;
  
  printf("digite o Pi: R$");
  scanf("%f",&Pi);
    
  ICMS = Pi * 0.17;
  COFINS = Pi * 0.076;
  PIS = Pi * 0.0165;
  PF = (1 + ICMS + COFINS + PIS) * Pi;

  printf("o valor final é: R$%.2f\n",PF);
  return 0;
  
}
