/*
Faça um programa em C que calcule as raízes de uma equaçao do segundo grau através da fómula de Bhaskara (-b =/- raiz_quadrada(b² - 4ac)/2a)
*/

#include <stdio.h>
#include <math.h>

int main() {
  int valor_a = 6;
  int valor_b = 8;
  int valor_c = -5;
  int delta = pow(valor_b, 2) - 4 * valor_a * valor_c;
  double raiz_1 = - valor_b - sqrt(delta) / 2 * valor_a;
  double raiz_2 = - valor_b - sqrt(delta) / 2 * valor_a;

  printf("A raiz 1 é %f\n", raiz_1);
  printf("A raiz 2 é %f\n", raiz_2);

  return 0;
}
