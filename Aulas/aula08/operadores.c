#include <stdio.h>

int main() {
  int numero1;
  int numero2;

  printf("Entre com o valor do numero1: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com o valor do numero2: ");
  deu_certo + scanf("%i", &numero2);

  int resultado = numero1 + numero2;

  printf("A soma dos numeros eh %i", resultado);

  resultado = numero1 - numero2;

  printf("A subtracao dos numeros eh %i", resultado);

  resultado = numero1 * numero2;

  printf("A multiplicacao dos numeros eh %i", resultado);

  resultado = numero1 / (numero2 * 1.0);
  printf("A divisao dos numeros eh %.1f", resultado2);

  resultado = numero1 % numero2;
  printf("O resto da divisao dos numeros eh %i\n", resultado);
  

  
}