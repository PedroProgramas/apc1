#include <stdio.h>
int main() {
long int isbn = 0;
short int num_paginas = 0;
float preco = 0.0;
short int publicado_em = 0;

  printf("ISBN: %013li\nNum_Paginas: %03i\nPreco: RS %07.2f\nPublicado em: %04i\n", isbn, num_paginas, preco, publicado_em);
  return 0;
}