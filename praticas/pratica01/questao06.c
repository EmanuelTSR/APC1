//6. Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).//

#include <stdio.h>
#include <math.h>

int main(){
float a;
float b;
float c;
printf ("Informe o valor de A:");
scanf("%f", &a);
printf ("Informe o valor de B:");
scanf("%f", &b);
printf ("Informe o valor de C:");
scanf("%f", &c);

  float delta = b*b - 4 * a * c;
  float raiz_delta = sqrt(delta);
  float bhaskara = ((-b + raiz_delta)) / (2*a);
  float bhaskara_n = ((-b - raiz_delta)) / (2*a);
  printf("O valor de X linha é: %f", bhaskara);
  printf("O valor de X duas linhas é: %f", bhaskara_n);

  return 0;
}