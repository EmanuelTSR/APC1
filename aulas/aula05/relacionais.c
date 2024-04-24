#include <stdio.h>
int main(){
int numero1;
int numero2;

  printf("Entre com o numero 1: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com o numero 2: ");
  deu_certo = scanf("%i", &numero2);

  int sao_iguais = numero1 == numero2; //igualdade
  printf("Os numeros sao iguais? %i\n ", sao_iguais);

  int sao_diferentes = numero1 != numero2; //diferente
  printf("Os numeros sao diferentes? %i\n ", sao_diferentes);

  int eh_maior = numero1 > numero2;
  printf("O primeiro numero é maior? %i\n ", eh_maior);

  int eh_menor = numero1 < numero2;
  printf("O numero 1 é menor que o 2? %i\n ", eh_menor);

  int maior_ou_igual = numero1 >= numero2;
  printf ("O primeiro numero é maior ou igual? %i\n ", maior_ou_igual);

  int menor_ou_igual = numero1 <= numero2;
  printf ("O primeiro numero é menor ou igual? %i\n", menor_ou_igual);
  return 0;
}