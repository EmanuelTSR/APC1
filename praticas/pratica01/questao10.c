//10. Faça um programa em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).
#include <stdio.h>
int main(){
int numero;
printf("Qual o numero para ser decomposto ?");
int d = scanf("%i", &numero);
int milhar = numero / 1000;
int centena = numero / 100;
 printf("%i", centena);
return 0;
}