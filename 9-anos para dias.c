/*Faça um programa em C que converta uma idade expressa em anos, meses e dias
para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.*/
#include <stdio.h>
int main() {

  int ano, mes, dia1, dia2, dia0;

  printf("insira o valor em anos meses e dias respectivamente:");
  scanf("%d%d%d", &ano, &mes, &dia0);

  dia1 = ano * 365;
  dia2 = mes * 30;
  dia0 = dia0 + dia1 + dia2;

  printf(" Aproximadamente %d dias:\n", dia0);

  return 0;
}
