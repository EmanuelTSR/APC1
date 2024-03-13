/*
3. Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.
*/
#include <stdio.h>

int main() {
  const float PI = 3.1416f;
  int raio = 10;

  float perimetro_da_pizza = 2 * PI * raio;
  printf ("O perímetro da pizza é %f\n", perimetro_da_pizza);

  return 0;
}
