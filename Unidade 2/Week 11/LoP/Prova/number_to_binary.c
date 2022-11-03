#include <stdio.h>
#include <stdlib.h>

#define MAX 32

int number_to_binary(char *binario, int numero, int position);

int main() {
  char *binario = calloc(MAX, sizeof(char));
  int numero;

  scanf("%d", &numero);
  if(numero == 0){
    printf("%d", 0);
    return 0;
  }
  number_to_binary(binario, numero, 0);

  for (int i = MAX - 1; i >= 0; i--) {
    if (binario[i] != 0) {
      printf("%c", binario[i]);
    }
  }
  return 0;
}

int number_to_binary(char *binario, int numero, int position) {
  int num = position;
  if (numero == 0) {
    return 1;
  } else {
    number_to_binary(binario, numero / 2, position + 1);
    int resto = numero % 2;
    if (resto == 1) {
      binario[position] = '1';
    } else {
      binario[position] = '0';
    }
  }
}