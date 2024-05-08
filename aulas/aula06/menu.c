#include <stdio.h>
int main(){
char opcao;

printf("MENU PRINCIPAL\n");
printf("1 - Consultar Saldo\n");
printf("2 - Fazer recarga\n");
printf("3 - Listar recados\n");
printf("4 - Ligações Feitas\n");
printf("0 - Sair\n");
printf("Entre com uma opção =>\n");
  int leu_certo = scanf("%c", &opcao);
switch (opcao){
  case '1': printf("Seu saldo eh R$ 10,00"); break;
  case '2': {printf("Entre com o valor da recarga\n");
             float valor;
             leu_certo = scanf("%f", &valor);
             printf("Recarga efetuada");} break;
  case '3': printf("Você não tem recados seu fudido!"); break; 
  case '4': printf("62999999999\n");
            printf("62999999997\n");
            printf("62999999998\n"); break;
  case '0': printf("Até logo\n"); break;
  default: printf("Opção invalida tente novamente!");
  }
    return 0;
}