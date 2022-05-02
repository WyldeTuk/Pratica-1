// raizes de uma equação do segundo gral
#include <math.h>
#include <stdio.h>

int main() {

  float a, b, c, d;
  float raiz1, raiz2;

  printf("Determine o valor de a:");
  scanf("%f", &a);

  printf("Determine o valor de b:");
  scanf("%f", &b);

  printf("Determine o valor de c:");
  scanf("%f", &c);

  d = (b * b) - 4 * a * c;
  printf("Delta = %.0f\n", d);

  if (d >= 0) {

    raiz1 = (-b + sqrt(d)) / (2 * a);
    raiz2 = (-b - sqrt(d)) / (2 * a);

    printf("Raiz 1 = %.2f\n", raiz1);
    printf("Raiz 2 = %.2f\n", raiz2);
  } else {
    printf("Nao existem raizes reais\n");
  }
  return 0;
}
