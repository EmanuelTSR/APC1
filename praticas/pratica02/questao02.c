//2. Faça um programa em C que leia dois números inteiros e imprima o quociente e o resto da divisão entre eles.
#include <stdio.h>
#include <math.h>

int main(){
 int numero01;
int numero02;
  
  printf("Escreva o numero primeiro numero: ");
  int deu_certo = scanf("%i", &numero01);

  printf("Escreva o segundo numero: ");
  deu_certo = scanf("%i", &numero02);
  
 float divisao = 1.0f * numero01 / numero02; 
  printf ("O quociente é: %-10.4f\n", divisao);
  
  float resto = numero01 % numero02;
  printf ("O resto da divisão é: %-10.4f\n", resto);
  
  
return 0; 
}