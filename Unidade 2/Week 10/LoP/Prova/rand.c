#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void read_line(char entrada[], int max, FILE *f);
int in(int size, int *numeros, int teste);
void append(int size, int *numeros, int item);

int main() {
  char string_aux[50];
  char **nomes = calloc(1, sizeof(char *));
  int cont = 1, key = 0;

  while (1) {
    read_line(string_aux, 49, stdin);

    // String digitada é diferente de "acabou"
    if (strcmp(string_aux, "acabou") != 0) {
      nomes[cont - 1] = calloc(50, 1);
      strcpy(nomes[cont - 1], string_aux);
      cont++;
      nomes = realloc(nomes, sizeof(char *) * cont);
    }
    // String digitada é igual a acabou
    else {
      cont--;
      break;
    }
  }

  scanf("%d", &key);
  srand(key);

  int numeros[cont];
  for (int i = 0; i < cont; i++) {
    numeros[i] = -1;
  }

  int cont2 = 0;
  while (1) {
    int rand_number = rand() % cont;

    if (in(cont, numeros, rand_number) == 0) {
      append(cont, numeros, rand_number);
      cont2++;
    }

    if (cont2 == cont) {
      break;
    }
  }

  for (int i = 0; i < cont; i++) {
    printf("%s\n", nomes[numeros[i]]);
  }

  return 0;
}

void read_line(char entrada[], int max, FILE *f) {
  do
    fgets(entrada, max, f);
  while (entrada[0] == '\n');
  int tam = strlen(entrada);
  if (entrada[tam - 1] == '\n')
    entrada[tam - 1] = '\0';
}

int in(int size, int *numeros, int teste) {
  int diferentes = 0;

  for (int i = 0; i < size; i++) {
    if (numeros[i] != teste) {
      diferentes++;
    } else {
      return 1;
    }
  }

  if (diferentes == size) {
    return 0;
  }

  return 0;
}

void append(int size, int *numeros, int item) {
  for (int i = 0; i < size; i++) {
    if (numeros[i] == -1) {
      numeros[i] = item;
      break;
    }
  }
}