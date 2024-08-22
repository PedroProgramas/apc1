#include <stdio.h> // biblioteca de entrada e saida na console

int main() {
  // imprime um texto na tela
 printf("Billie Jean is not my lover\n");
  // imprime um numero inteiro
  printf("%i\n", 69);
  printf("%i %i\n", 24,69);
  printf("%5i\n", 0001);
  printf("%05i\n", 22);

  // imprime um numero decimal
printf("%f\n", 8.5);
printf("%.3f\n", 3.14159);
printf("%8.2f\n", 110.5);
printf("%8.2f\n",2556.86);

  // imprime um caractere
  printf("%c\n", 'A');

  // imprime uma string
  printf("%s\n", "Olha a coroa");
  printf("%30s!\n", "Suco de kcete");
  printf("%-30s!\n", "Suco de cock");
  return 0;
}