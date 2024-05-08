#include <stdio.h>
int main() {
  float nota_p1;
  float nota_p2;

  printf("Entre com a primeira nota:");
  int deu_certo = scanf("%f", &nota_p1);

  int nota_p1_eh_valida = nota_p1 >= 0.0f && nota_p1 <= 10.0f;

  if (nota_p1_eh_valida) {
    printf("Entre com a nota da P2:");
    deu_certo = scanf("%f", &nota_p2);

    int nota2_eh_valida = nota_p2 >= 0.0f && nota_p1 <= 10.0f;

    if (nota2_eh_valida) {
      float media_final = nota_p1 * 0.4 + 0.6 * nota_p2;
      printf("A sua media final é %.2f\n", media_final);
      
    if (media_final >= 9.0f && media_final <= 10.0f){
      printf("A menção IESB é SS");
    } else if (media_final >= 7.0f && media_final <= 8.9f){
        printf("A menção IESB é MS");}
      else if (media_final >=5.0f && media_final <= 6.9f){
        printf("A menção IESB é MM");
    }else if (media_final >=3.0f && media_final <= 4.9f){
        printf("A menção IESB é MI");
        }else if (media_final >=0.1f && media_final <= 2.9f){
          printf("A menção IESB é II");
      } else if (media_final == 0.0f){
        printf("A menção IESB é SR");
      }
    } 
    else {
      printf("Nota invalida! Informe um valor entre 0.0 e 10.0\n");
    }
  }

  else {
    printf("Nota invalida! Informe um valor entre 0.0 e 10.0\n");
  }

  return 0;
}