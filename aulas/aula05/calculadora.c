#include <stdio.h>
#include <math.h>

int main(){
  int numero1;
  int numero2;
  const double PI = 3.1416;

  printf("Entre com o primeiro número:");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com o segundo número:");
  deu_certo = scanf("%i", &numero2);

  int soma = numero1 + numero2;
  printf("A soma dos numeros é: %i\n", soma);
  
  int subtracao = numero1 - numero2;
  printf("A subtração dos numeros é: %i\n", subtracao);
  
  int multiplicacao = numero1 * numero2;
  printf("A multiplicação dos numeros é: %i\n", multiplicacao);

  float divisao = 1.0f * numero1 / numero2;// conversao implicita
  printf("A divisão dos numeros é: %-10.4f\n", divisao);

  float resto =  numero1 % numero2;
  printf("O resto dos numeros é: %-10.4f\n", resto);

  // numero = numero1 +1;
  // incremento
  printf("O incremento do primeiro numero é: %i\n", numero1++);
  printf("O incremento do primeiro numero é: %i\n", ++numero1);

  // numero = numero1 -1;
  // decremento
  printf("O decremento do primeiro numero é: %i\n", numero1--);
  printf("O decremento do primeiro numero é: %i\n", --numero1);

  double raiz_quadrada = sqrt(numero1);
  printf("A raiz quadrada do primeiro numero é: %f\n", raiz_quadrada);

  double potencia = pow(numero1, 4);
  printf("potencia do primeiro numero é: %f\n", potencia);
  
  double logaritmo2 = log2(numero1);
  printf("O logaritmo do primeiro numero na base 2 é : %f\n", logaritmo2);

  double logaritmo = log (numero1);
  printf("O logaritmo do primeiro numero na base 10 é: %f\n", logaritmo);

  double seno = sin(numero1 * PI / 180);// angulo em radiano
  printf("O seno do primeiro numero é: %f\n", seno);
  
return 0;
}