#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void read_line(char entrada[], int max, FILE* f){
  do fgets(entrada, max, f);
  while (entrada[0] == '\n');
  int tam=strlen(entrada);
  if (entrada[tam-1] == '\n') entrada[tam-1]='\0';
}

int main() {
  char str[200];
  char *pedaco;
  int *numeros = calloc(1, sizeof(int));
  int cont = 0;

  read_line(str, 199, stdin);

  pedaco = strtok(str, " ");

  while (pedaco != NULL) {
    numeros[cont] = atoi(pedaco);
    cont++;
    numeros = realloc(numeros, (cont + 1) * sizeof(int));

    pedaco = strtok(NULL, " ");
  }

  for (int i = 1; i < cont; i++) {
    for (int j = 0; j < cont - 1; j++) {
      if (numeros[j] > numeros[j + 1]) {
        int aux = numeros[j];
        numeros[j] = numeros[j + 1];
        numeros[j + 1] = aux;
      }
    }
  }

  for (int i = 0; i < cont; i++) {
    printf("%d ",numeros[i]);
  }
}