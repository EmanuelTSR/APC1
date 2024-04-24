//Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.
#include <stdio.h>
#include <math.h>

int main(){
  float angulo;
  float distancia;
  const float PI = 3.1416;

  printf("Qual a distancia percorrida pelo avião? ");
  int deu_certo = scanf("%f", &distancia);

  printf("Qual o angulo de inclinação do avião? ");
  deu_certo = scanf("%f", &angulo);

  float altura = sin(angulo * PI / 180) * distancia;
  printf("A altura do avião é : %f\n", altura);
  return 0;
}