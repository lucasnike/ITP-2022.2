#include <stdio.h>

int main(){
   char tabuleiro[3][3] = {{'.', '.', '.'}, {'.', '.', '.'}, {'.', '.', '.'}};

   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         if (i == 2 && j == 2){
            scanf("");
         }else if (j == 2){
            scanf("%c ", &tabuleiro[i][j]);
         }else{
            scanf("%c", &tabuleiro[i][j]);
         }
      } 
   }

   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         printf("%c \n", tabuleiro[i][j]);
      }
      
   }
   

   return 0;
}