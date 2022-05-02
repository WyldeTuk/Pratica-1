/* Faça um programa em C que converta um tempo expresso em segundos para um
 valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).*/

#include <stdio.h>

int main() {

  int hr, min, seg;

  printf("insira o valor em segundos:");
  scanf("%d", &seg);

  hr = seg / 3600;

  min = (seg % 3600) / 60;

  seg = (seg % 3600) % 60;

  printf("são %.2d:", hr);
  printf("%.2d:", min);
  printf("%.2d\n", seg);

  return 0;
}
/*7598 -- hr - 3600
       -- min - 60
       -- seg - 1*/
