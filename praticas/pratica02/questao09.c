#include <stdio.h>

int main() {
  int numero;
  printf("Digite um numero inteiro: ");
  int leu_certo = scanf("%i", &numero);

  printf("O seu numero em ASCII é equivalente há:");
  putchar(numero);
  putchar('\n');

  return 0;
}
