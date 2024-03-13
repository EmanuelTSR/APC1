/*7. Faça um programa em C que leia o valor da hora de trabalho e o total de horas trabalhadas no mês e calcule o salário bruto, o salário líquido, e os impostos descontados. Considere IR igual a 25% e INSS igual a 11%.*/

#include <stdio.h>

int main() {
  float valorhora = 150.0f;
  float totalhora = 120.0f;
  
  const float INSS = 0.25f;
  const float IR = 0.11f;

  float salario_bruto = valorhora * totalhora;
  float valor_ir = salario_bruto * IR;
  float valor_inss = salario_bruto * INSS;
  float valor_liquido = salario_bruto - valor_ir - valor_inss;

  printf("\x1b[40m \x1b[33m--------------------------------\x1b[0m\n");
  printf("\x1b[40m \x1b[33m  C O N T R A   C H E Q U E     \x1b[0m\n");
  printf("\x1b[40m \x1b[33m--------------------------------\x1b[0m\n");
  printf("Salario bruto...: \x1b[32m%14.2f\x1b[0m\n", salario_bruto);
  printf("Imposto de Renda: \x1b[31m%14.2f\x1b[0m\n", valor_ir);
  printf("Imposto INSS....: \x1b[31m%14.2f\x1b[0m\n", valor_inss);
  printf("Salario Liquido.: \x1b[32m%14.2f\x1b[0m\n", valor_liquido);
  
    return 0;
}