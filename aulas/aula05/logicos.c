#include <stdio.h>
int main(){
int numero1;
int numero2;

  printf("Entre com o numero 1: ");
  int deu_certo = scanf("%i", &numero1);


  //0 < x < 10 --> 0 < x E x < 10

  int maior_que_0_e_menor_que_10 = numero1 > 0 && numero1 < 10; // && = E
  printf("O numero 1 é maior que 0 e menor que 10 ? %i\n", maior_que_0_e_menor_que_10);

  // X < 0, x > 10 --> x < 0 OU > 10
  int menor_que_0_ou_maior_que_10 = numero1 < 0 || numero1 >10; //  || = OU
  printf ("O numero é menor 0 ou maior que 10 ? %i\n", menor_que_0_ou_maior_que_10);

  // x NAO > 0
  int nao_maior_que_0 = !(numero1 > 0); // ! negação
  printf("O numero nao é maior que 0 ? %i\n", nao_maior_que_0);


  return 0;
}