//9. Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.
#include <stdio.h>
int main(){
  int anos;
  int meses;
  int dias;

  printf("Quantos anos você tem ?");
  int deu_certo = scanf("%i", &anos);
  
  printf("Qual mes você nasceu ?");
  deu_certo = scanf("%i", &meses);
  
  printf("Qual dia você nasceu ?");
  deu_certo = scanf("%i", &dias);

  int total_dias = (anos * 365) + (meses * 30) + dias;

  printf("O total de dias desde que você nasceu é %i\n", total_dias);

  return 0;
}