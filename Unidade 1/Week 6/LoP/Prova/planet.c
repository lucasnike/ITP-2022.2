#include <stdio.h>

int main(){
   int linhas = 0, colunas = 0;
   int agua = 0, especiesHostis = 0, deserto = 0, vegetacao = 0, soloRuim = 0;
   scanf("%d %d", &linhas, &colunas);
   int total = linhas * colunas;


   char propriedadesDoPlaneta[linhas][colunas];

   // Laço que percorre as linhas
   for (int i = 0; i < linhas; i++)
   {      
      // Laço que percorre as colunas
      for (int j = 0; j < colunas; j++)
      {
         scanf(" %c", &propriedadesDoPlaneta[i][j]);

         switch (propriedadesDoPlaneta[i][j])
         {
         case 'X':
            especiesHostis++;
            break;
         case '~':
            agua++;
            break;
         case '^':
            deserto++;
            break;
         case '*':
            vegetacao++;
            break;
         case '.':
            soloRuim++;
            break;
         }
      }
   }


   if (especiesHostis >= 1)
   {
      printf("Planeta Hostil");
   }
   else if(especiesHostis == 0 && agua*100/total >= 50 && vegetacao*100/total >= 20){
      printf("Planeta Classe M");
   }
   else if(agua*100/total>=85)
   {
      printf("Planeta Aquático");
   }
   else if(deserto*100/total >= 60)
   {
      printf("Planeta Desértico");
   }
   else if(vegetacao*100/total >= 65)
   {
      printf("Planeta Selvagem");
   }
   else
   {
      printf("Planeta Inóspito");
   }
   
   
   return 0;
}