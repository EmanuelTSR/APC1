/*
  5. Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).
*/
#include <stdio.h>

int main() {
float giga = 10;
long int byte = giga * 1073741824;

printf("O valor em bytes é %li\n", byte);

  return 0;
}