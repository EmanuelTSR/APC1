//2. Faça um programa em C que calcule o valor do desconto sobre um valor bruto lido com base na escala: até de 100.00 aplica 1%; de 100.01 a 500.00 aplica 5%; acima de 500.00 aplica 10%.
#include <stdio.h>
int main(){
  float valor_do_produto;
  float valor_com_desconto;
  float valor_do_desconto;

  printf("Qual o valor do produto ?");
  int deu_certo = scanf("%f", &valor_do_produto);
  if (valor_do_produto <= 100.0f){
   valor_com_desconto = valor_do_produto * 0.99f;
    printf("O valor do produto com o desconto aplicado é de: %.2f\n", valor_com_desconto);
    valor_do_desconto = valor_do_produto * 0.1f;
    printf("O valor do desconto aplicado foi de: %.2f\n", valor_do_desconto);
  } 
  else if (valor_do_produto <= 500.0f){
    valor_com_desconto = valor_do_produto * 0.95f;
    printf("O valor do produto com o desconto aplicado é de: %.2f\n", valor_com_desconto); 
    valor_do_desconto = valor_do_produto * 0.05f;
    printf("O valor do desconto aplicado foi de: %.2f\n", valor_do_desconto);
}  else {
      valor_com_desconto = valor_do_produto * 0.90f;
       printf("O valor do produto com o desconto aplicado é de: %.2f\n", valor_com_desconto);
  valor_do_desconto = valor_do_produto * 0.1f;
  printf("O valor do desconto aplicado foi de: %.2f\n", valor_do_desconto);
  }

  return 0;
}