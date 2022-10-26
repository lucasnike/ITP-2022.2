#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   char str[200];
   char* pedaco;
   int* numeros = calloc(1, sizeof(int));
   int cont = 0;
   
   fgets(str, 199, stdin);

   pedaco = strtok(str, " ");

   while (pedaco != NULL)
   {
      numeros[cont] = atoi(pedaco);
      printf("Atoi %d\n", cont);
      cont++;
      printf("Atoi %d\n", cont);
      realloc(numeros, (cont + 1) * sizeof(int));
      printf("Atoi %d\n\n", cont);


      pedaco = strtok(NULL, " ");
   }

   for (int i = 0; i < cont; i++)
   {
      printf("%d\n", numeros[i]);
   }

   printf("Posicao 0 = %d", numeros[0]);
   
}