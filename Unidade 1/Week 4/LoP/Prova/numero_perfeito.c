#include <stdio.h>

int ehPerfeito(int numero){

   int somatorio = 1;

   for (int i = 2; i < numero; i++)
   {
      if (numero % i == 0)
      {
         somatorio += i;
      }
   }
   
   if (somatorio == numero)
   {
      return 1;
   }
   
   return 0;
}

int main(){

   int qtdNumeros ,numero, perfeito;

      scanf("%d", &qtdNumeros);


   for (int i = 0; i < qtdNumeros; i++)
   {
      scanf("%d", &numero);

      perfeito = ehPerfeito(numero);

      if (perfeito == 1)
      {
         printf("%d eh perfeito\n", numero);
      }
      else
      {
         printf("%d nao eh perfeito\n", numero);
      }
   }
   
   return 0;
}