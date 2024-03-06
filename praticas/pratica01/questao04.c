/* 
4. Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.
*/
#include <stdio.h>

int main () {
  float preco_inicial = 100.00f;
  float preco_final = 0.0f;
  const float ICMS = 0.17f;
  const float COFINS = 0.076f;
  const float PIS_PASEP = 0.0165f;

    float valor_imposto_icms = ICMS * preco_inicial;
    float valor_imposto_cofins = COFINS * preco_inicial;
    float valor_imposto_pis_pasep = PIS_PASEP * preco_inicial;
    preco_final = (1 + ICMS + COFINS + PIS_PASEP) * preco_inicial;
  
  printf("O preço final do produto é %f\n", preco_final);
  printf ("O preço inicial era %f\n", preco_inicial);
  printf("ICMS = %f\n", valor_imposto_icms);
  printf("COFINS = %f\n", valor_imposto_cofins);
  printf("PIS_PASEP = %f\n", valor_imposto_pis_pasep);
  return 0;
}