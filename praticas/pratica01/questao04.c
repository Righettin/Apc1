/*
Faça um programa que C calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS = PIS/PASEP) x preço incial). Considere ICMS igual a 17%, Confins igual a 7,6% e PIS/PASEP igual a 1,65%
*/

#include <stdio.h>

int main() {
  float preco_inicial = 100.0f;

  float valor_icms = preco_inicial * 0.17f;
  float valor_cofins = preco_inicial * 0.076f;
  float valor_pispasep = preco_inicial * 0.0165f;

  float preco_final = (1 + 0.17f + 0.076f + 0.0165f) * preco_inicial;

  printf("O preco inicial é %f\n", preco_inicial);
  printf("O valor ICMS é %f\n", valor_icms);
  printf("O valor COFINS é %f\n", valor_cofins);
  printf("O valor PIS_PASEP é %f\n", valor_pispasep);
  printf("O preco_final é %f\n", preco_final);

  return 0;
}