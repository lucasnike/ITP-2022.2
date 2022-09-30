#include <stdio.h>

void mostrar_piramide(int largura);

int main(){
   int largura = 0;
   scanf("%d", &largura);

   mostrar_piramide(largura);

   return 0;
}

void mostrar_piramide(int largura){
   int passo = largura;
   
   // Laço que percorre as linhas do array
   for (int i = 1; i <= largura; i++)
   {
      // Laço que percorre as colunas do array
      for (int j = 1; j <= largura; j++)
      {

         if (i == 1 || i == largura || j == 1 || j == largura)
         {
            printf("1 ");
         }else if (i == 2 || i == largura - 1 || j == 2 || j == largura - 1)
         {
            printf("2 ");
         }
         else if (i == 3 || i == largura - 2 || j == 3 || j == largura - 2)
         {
            printf("3 ");
         }
         else if (i == 4 || i == largura - 3 || j == 4 || j == largura - 3)
         {
            printf("4 ");
         }
         else if (i == 5 || i == largura - 4 || j == 5 || j == largura - 4)
         {
            printf("5 ");
         }
          else if(i == j && j < largura){
            printf("%d ", j); 
         }
         else{

            printf("%d ", i);
         }


         

      }

      printf("\n");
   }
}