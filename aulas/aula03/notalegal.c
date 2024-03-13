#include <stdio.h>

int main() {
printf("\x1b[31m------------------------\x1b[0m\n");
 printf ("   \x1b[33m \x1b[1mN O T A   L E G A L\x1b[0m      \n");
 printf("\x1b[31m------------------------\x1b[0m\n");
  printf("ITEM          QTD  VALOR \n");
   printf("\x1b[35m%-13s\x1b[0m \x1b[34m%03i\x1b[0m \x1b[32m%6.2f\x1b[0m\n", "Banana nanica", 100, 20.00);
   printf("\x1b[35m%-13s\x1b[0m \x1b[34m%03i\x1b[0m \x1b[32m%6.2f\x1b[0m\n", "Uva globo", 1, 15.00);
  printf("\x1b[35m%-13s\x1b[0m \x1b[34m%03i\x1b[0m \x1b[32m%6.2f\x1b[0m\n", "Laranja lima", 1, 18.00);
  /*printf("Banana     2   20.00\n");
  printf("Uva Globo  1   25.00\n");
  printf("Laranja    1   12.00\n");*/
  
  printf("\x1b[31m------------------------\x1b[0m\n");
  printf("TOTAL:........:    %-10.2f\n", 53.00);
  return 0;
}