//8. Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).
#include <stdio.h>
#include <math.h>

int main(){
int segundos;
printf("Qual o valor em segundos?");
int deu_certo = scanf("%i\n", &segundos);
int horas = segundos / 3600;
int minutos = segundos / 60;

printf ("%i segundos correspondem a %i minutos e a %i horas", segundos, horas, minutos);
return 0;
}
