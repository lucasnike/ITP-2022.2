#include <stdio.h>

int main(){

   int i = 0, soma = 0;

   while (i < 1){
      printf("Digite um numero:  ");
      scanf("%d", &i);

      if (i < 0) {
         break;
      } else {
         soma += i;
         i = 0;
      }
   }

   printf("\nA soma total de todos os numeros digitados eh %i\n", soma);

   return 0;
}