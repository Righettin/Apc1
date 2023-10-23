#include <stdio.h>

int main () {
  char opcao = -1;
  
  while(1) {
    printf("MENU PRINCIPAL\n");
    printf("1 - Consultar saldo\n");
    printf("2 - Fazer recarga\n");
    printf("3 - Listar recados\n");
    printf("0 - Sair\n");
    printf("Sua escolha => ");
    int leu_certo = scanf ("%c", &opcao); 
    getchar();

    switch(opcao) {
      case '1' : printf("Seu saldo é %.2f\n", saldo); break;
      case '2' : printf("Escolha um valor de recarga:"); break;
      case '3' : printf("Voce nao tem recados\n"); break;
      case '0' : break;
      default : printf("Opcao invalida\n"); break;
    }