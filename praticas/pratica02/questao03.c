//Faça um programa em C que leia uma temperatura em graus Celsius e calcule o valor correspondente em graus Fahrenheit (°F = 9/5°C + 32).
#include <stdio.h>
#include <math.h>

int main(){
  int temp1;

  printf("Qual a temperatura em Celsius?");
  int deu_certo = scanf("%i", &temp1);

  int fahrenheit = temp1 * 9/5 + 32;
  printf("A temperatura em Farenheit é: %i\n", fahrenheit);
  
  return 0;
}