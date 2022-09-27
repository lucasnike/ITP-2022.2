#include <stdio.h>

void mostrar_piramide(int largura);

int main(){
   int largura = 0;
   scanf("%d", &largura);

   mostrar_piramide(largura);

   return 0;
}

void mostrar_piramide(int largura){
   int passo = largura - 2;

   // if (largura % 2 == 0)
   // {
   //    /* code */
   // }
   // else{

   // }
   
   // Laço que percorre as linhas do array
   for (int i = 0; i < largura; i++)
   {
      // Laço que percorre as colunas do array
      for (int j = 0; j < largura; j++)
      {
         // Se o i for a primeira ou a última linha
         if (i == 0 && i == largura - 1)
         {
            // Printa a primeira linha da piramide
            for (int k = 0; k < largura; k++)
            {
               if (k != largura - 1)
               {
                  printf("%d ", i + 1);
               }
               else
               {
                  printf("%d\n", i + 1);
               }
            }
            
         }
         else
         {
            
         }
      }
   }
}