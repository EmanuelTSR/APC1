/*
2. Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.
*/
#include <stdio.h>

int main() {
int base = 5;
int altura = 3;
float area = base * altura / 2;
  printf("A area do seu triangulo é%f\n", area);
  return 0;
}