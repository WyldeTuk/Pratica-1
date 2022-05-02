/*Faça um programa em C que calcule a decomposição de um número inteiro qualquerem unidade, dezena, 
centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).*/

#include <stdio.h>

int main(){
    int valor, milhar, centena, dezena, unidade;
    
    printf("digite o valor a ser decomposto:");
    scanf("%d", &valor);
    
    milhar = valor / 1000;
    centena = (valor % 1000) / 100;
    dezena = (valor % 1000) % 100 / 10;
    unidade = ((valor % 1000) % 100) % 10;
        
        
    printf(" %d --Milhar\n %d --Centena\n %d --Dezena\n %d --unidade\n", milhar, centena, dezena, unidade);
    return 0;
}

/* 7598 -- milhar   1000
    598 -- centena  100
     98 -- dezena   10
      8 --unidade   1*/
