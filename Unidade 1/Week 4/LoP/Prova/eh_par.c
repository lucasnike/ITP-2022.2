#include <stdio.h>

int ehPar(int numero)
{
   if (numero % 2 == 0)
   {
      return 1;
   }
   else {
      return 0;
   }
   
}

int main(){

   int numero;
   scanf("%d", &numero);

   numero = ehPar(numero);

   if (numero == 0)
   {
      printf("false");
   }
   else
   {
      printf("true");
   }
   

   return 0;
}