//Programa pra determinar altura do avião a partir do seno.
#include <stdio.h>
#include <math.h>

int main(){
 double altura, distancia, angulo, PI = 3.1416;
  double radiano, ret;

  printf("insira o angulo em graus:");
  scanf("%lf", &angulo);

  printf("insira a distancia:");
  scanf("%lf", &distancia);

 
  altura = sin(angulo) * distancia;
  
   radiano = angulo * PI / 180;
   ret = sin(radiano);
   
   altura = sin(radiano) * distancia;
   
   printf("altura do avião é %.3lf\n", altura);

  return 0;
}
