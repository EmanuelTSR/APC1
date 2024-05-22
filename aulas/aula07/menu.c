#include <stdio.h>
#include <stdlib.h>
int main(){
int opcao = 0;
do{
  int deu_certo = system("clear");
  printf("MEU JOGO\n");
  printf("1 - Iniciar\n");
  printf("2 - Resultado\n");
  printf("3 - Ajuda\n");
  printf("4 - Sair\n");
  
  deu_certo = scanf("%i", &opcao);
  if(!deu_certo) opcao = 0;
  while(getchar() != '\n');
  
  switch(opcao){
    case 1:
      deu_certo = system("clear");
      char nome[31];
      printf("Nome do jogador: \n");
      deu_certo = scanf("%[^\n]s", nome);
        while(getchar() != '\n');
      printf("Ola %s\n", nome);
      printf("Pressione ENTER p/ iniciar");
      getchar();
      break;
      case 2: 
      deu_certo = system("clear");  
      printf("Resultado\n");
      printf("1º Lugar - Jose - 1000\n");
      printf("2º Lugar - Abraaão - 700\n");
      printf("3º Lugar - Giussepe - 699\n");
      printf("4º Lugar - Cadura- 600\n");
      printf("5º Lugar - fulano de tals - 200\n");
      printf("Pressione ENTER p/voltar");
      getchar();
      break;
      case 3: break;
      case 4: break;
      default: opcao = 0; 
        printf("Opcão invalida! Pressione ENTER para continuar\n");
        getchar();
    break;
  }
}while(opcao !=4);  

return 0;  
}