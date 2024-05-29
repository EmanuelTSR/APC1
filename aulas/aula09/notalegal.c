#include <stdio.h>
#include <string.h>

int main(){
enum unidade_e{
unidade,
caixa,
lata,
peso
};
  
struct produto_t {
char nome[21];
float preco;
int quantidade;
float valor;
int unidade; // 0 = un, 1=cx, 2=lt, 3=kg
};

  struct produto_t produto[5];
  for(int i=0; i<5; i++){
  printf("Entre com o nome do produto:\n");
  int deu_certo = scanf("%s", produto[i].nome);
  while(getchar() !='\n');
    
  printf("Entre com a quantidade de produtos:\n");
  deu_certo = scanf("%i", &produto[i].quantidade);
    while(getchar() !='\n');
  
  printf("Entre com a unidade do produto: \n");
  printf("0 - unidade, 1 - caixa, 2 - lata, 3 - peso");
  deu_certo = scanf("%i", &produto[i].unidade);
    while(getchar() !='\n');
    
  printf("Entre com o preço do produto:\n");
  deu_certo = scanf("%f", &produto[i].preco);
    while(getchar() !='\n');

  produto[i].valor = produto[i].preco * produto[i].quantidade;

  }
  
  for(int i=0; i<5; i++){
  printf("\n NOTAL LEGAL \n");
  printf("Item       Qtd Und    Preço    Valor\n");
  printf("%-12s %03i",produto[i].nome, produto[i].quantidade); 
  switch(produto[i].unidade){
  case 0: printf(" UN"); break;
  case 1: printf(" CX"); break;
  case 2: printf(" LT"); break;
  case 3: printf(" KG"); break;
  }  
  printf("%8.2f %8.2f\n", produto[i].preco, produto[i].valor);

  }


return 0;
}