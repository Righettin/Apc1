#include <stdio.h>

int main() {
  int nota = 0;

  printf("Entre com uma nota entre 1 e 5: ");
  scanf("%i", &nota);

  if (nota == 1) {
    printf("Ruim\n");
  } else if (nota == 2) {
    printf("Insuficiente\n");
  } else if (nota == 3) {
    printf("Suficiente\n");
  } else if (nota == 4) {
    printf("Bom\n");
  } else if (nota == 5) {
    printf("Otimo\n");
  } else {
    printf("Nota inválida\n");
  }

return 0; 
}