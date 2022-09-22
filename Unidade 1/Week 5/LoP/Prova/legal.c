#include <stdio.h>

int vetor_legal(int *numeros, int tamanho){
   int qtd_pares = 0;
   for (int i = 1; i < tamanho; i++)
   {
      if ((numeros[i] - numeros[i - 1]) % 2 == 0)
      {
         qtd_pares++;
      }
      else
      {
         break;
      }
   }

   if (qtd_pares == tamanho - 1)
   {
      return 1;
   }
   else
   {
      return 0;
   }
}

int main(){
   int tamanho;
   scanf("%d", &tamanho);
   int numeros[tamanho];

   for (int i = 0; i < tamanho; i++)
   {
      scanf("%d", &numeros[i]);
   }

   if (vetor_legal(numeros, tamanho) == 1)
   {
      printf("Legal");
   }
   else
   {
      printf("Chato");
   }

   return 0;
}