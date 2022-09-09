#include <stdio.h>
#include <locale.h>

int main(){
   setlocale(LC_ALL, "Portuguese");
   int anos, anosValidos = 0;
   float soma = 0;

   scanf("%d", &anos);

   for (int i = 0; i < anos; i++)
   {
      float marcaEmMetros = 0;
      scanf("%f", &marcaEmMetros);

      if (marcaEmMetros > 0)
      {
         anosValidos++;
         soma += marcaEmMetros;
      }
   }


   if (anosValidos >= 1)
   {
      float media = soma / anosValidos;
      printf("%.2f", media);
   } else {
      printf("A competicao nao possui dados historicos!");
   }

   return 0;
}