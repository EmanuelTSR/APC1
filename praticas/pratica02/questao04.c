// 4. Faça um programa em C que leia a largura e o comprimento de um terreno em metros e calcule a sua área em hectares (1 hectare = 10.000 m²).
#include <stdio.h>
int main(){
  int comprimento_metro;
  int largura_metro;
   printf("Qual o comprimento do terreno ?");
  int deu = scanf("%i", &comprimento_metro);
  printf("Qual a largura do terreno ?");
  deu = scanf("%i", &largura_metro);

  float hectare = (largura_metro * comprimento_metro) / 10000;
  printf("A area em hectares é: %10.2f\n", hectare);


  return 0;
}