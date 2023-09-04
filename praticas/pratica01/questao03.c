/*
Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.
*/

#include <stdio.h>

#define PI 3.1417

int main() {
  int raio_pizza = 10;

  float perimetro_pizza = 2 * PI * raio_pizza;

  printf("O perimetro da pizza é %f cm\n", perimetro_pizza);

  return 0;
}
