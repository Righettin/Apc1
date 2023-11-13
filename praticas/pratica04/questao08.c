/*
Faça um programa em C que leia nome e telefone de 10 contatos, e depois imprima todos os contatos no formato "nome - (telefone)".
*/

#include <stdio.h>

int main() {
  struct contato_t {
  char nome [61];
  int telefone;
  }

  struct contato_t contatos[10];

  for(int  i=0; i<10; i++) {
    printf("%iº Contato\n", i + 1);
    
}