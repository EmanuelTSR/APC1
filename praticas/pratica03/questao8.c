//8. Faça um programa em C que calcule o fatorial de um número inteiro.
#include <stdio.h>
int main(){
    long int numero;
    long int fatorial = 1;

    printf("Calculo do Fatorial (n!)\n\n");
    printf("Entre com um numero >= 0: ");
    int deu_certo = scanf("%li", &numero);
    int numero_valido = numero >= 0;

    if (deu_certo && numero_valido) {
      printf("%li! = ", numero);
      for(int i = numero; i > 1; i--) {
        fatorial = fatorial * i;
        printf("%li x ", i);
      }
      printf("1 = %li\n", fatorial);
    } else {
      printf("Numero invalido!\n");
    }

    return 0;
  }