#include <stdio.h>

int main(){

   int numeroDePetalas = 0;

   printf("Digite o numero de petalas da flor: ");
   scanf("%d", &numeroDePetalas);

   if(numeroDePetalas % 2 == 0)
   {
      printf("\nMal me quer! Estalo!");
   } else
   {
      printf("\nBem me quer! #Xatiado");
   }

   // Operador ternário
   numeroDePetalas % 2 == 0 ? printf("\nE par") : printf("\nEh impar");

   return 0;
}