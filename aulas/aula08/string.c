#include <stdio.h>
#include <string.h>
int main() {     // 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9
  char nome[30]; // u m n o m e a l e a t o r i o a a a a a a a a a a a a a a \0

  printf("Entre com o seu nome");
  int deu_certo = scanf("%[^/n]s", nome);

  printf("olá %s!\n", nome);

  char primeiro_nome[21];
  char ultimo_nome[21];

  strcpy(primeiro_nome, "Jose"); // primeiro_nome = "Jose"
  strcpy(ultimo_nome, "Junior");
  
  strcpy(nome, primeiro_nome);
  strcat(nome, ultimo_nome);// nome = Primeiro_nome + ultimo nome
  int tamanho = strlen(nome);
  printf("Seu nome tem %i carcteres\n", tamanho);
  printf("As strings sao iguais? %i\n", strcamp(primeiro_nome, ultimo_nome)); //==
  return 0;
}