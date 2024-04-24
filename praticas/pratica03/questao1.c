// 1. Faça um programa em C que determine se um número inteiro lido é par ou
// ímpar.
#include <math.h>
#include <stdio.h>

int main() {
  int numero1;

  printf("Insira um numero:");
  int leu_certo = scanf("%i", &numero1);
  if (leu_certo) {

    int numero_eh_par = numero1 % 2 == 0;
    if (numero_eh_par) {
      printf("O numero é PAR!\n");
    } else {
      printf("O numero é IMPAR !\n");
    }
  } else {
    printf("Numero invalido! Tente novamente\n");
  }
  return 0;
}