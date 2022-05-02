// programa para calcular media final
#include <stdio.h>

int main(void) {

  float A1, A2, Media;

  printf("digite valor de A1:");
  scanf("%f", &A1);

  printf("digite valor de A2:");
  scanf("%f", &A2);

  Media = (0.4 * A1) + (0.6 * A2);

  printf("sua media final foi:"
         "%.f\n",
         Media);

  if (Media >= 5) {
    printf("parabêns, não fez mais do q sua obrigação");
  } else
    printf("você é a vergonha da profissão");

  return 0;
}
