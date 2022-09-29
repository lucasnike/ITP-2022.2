#include <stdio.h>

// void reiniciarTabuleiro(char *matrizInicial, char *auxMatriz);

int main(){
   char tabuleiro[3][3] = {{'.', '.', '.'}, {'.', '.', '.'}, {'.', '.', '.'}};
   char auxTabuleiro[3][3];
   int jogadas = 0;
   int y, x;
   char player;

   // Preenche o tabuleiro e cria um auxiliar com os mesmos elementos
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         char aux;
         if (j == 2){
            scanf("%c%c", &tabuleiro[i][j], &aux);
            auxTabuleiro[i][j] = tabuleiro[i][j];
         }else{
            scanf("%c", &tabuleiro[i][j]);
            auxTabuleiro[i][j] = tabuleiro[i][j];
         }
      }
   }

   // Recebe a quantidade de jogadas que serão testadas
   scanf("%d", &jogadas);

   // Laço que testará a jogadas *jogadas vezes
   for (int i = 0; i < jogadas; i++)
   {
      int vencedor = 0;

      // Recebe a jogada
      scanf("%d %d %c", &y, &x, &player);

      // Verifica se a jogada é inválida
      if (auxTabuleiro[y - 1][x - 1] != '.')
      {
         printf("Jogada inválida!\n");
         continue;
      }else{
         auxTabuleiro[y - 1][x - 1] = player;
      }
      
      
      // Verifica se a jogada é ganhadora
      for (int i = 0; i < 3; i++)
      {
         // Verfica horizontalmente
         if (auxTabuleiro[i][0] == auxTabuleiro[i][1] && auxTabuleiro[i][1] == auxTabuleiro[i][2] && auxTabuleiro[i][2] != '.')
         {
            printf("Boa jogada, vai vencer!\n");
            vencedor++;
         }

         // Verifica verticalmente
         if (auxTabuleiro[0][i] == auxTabuleiro[1][i] && auxTabuleiro[1][i] == auxTabuleiro[2][i] && auxTabuleiro[2][i] != '.')
         {
            printf("Boa jogada, vai vencer!\n");
            vencedor++;
         }
      }

      // Verifica a diagonal
      if (auxTabuleiro[0][0] == auxTabuleiro[1][1] && auxTabuleiro[1][1] == auxTabuleiro[2][2] && auxTabuleiro[1][1] != '.')
      {
         printf("Boa jogada, vai vencer!\n");
         vencedor++;
      }

      // Verifica a diagonal
      if (auxTabuleiro[0][2] == auxTabuleiro[1][1] && auxTabuleiro[1][1] == auxTabuleiro[2][0] && auxTabuleiro[1][1] != '.')
      {
         printf("Boa jogada, vai vencer!\n");
         vencedor++;
      }
      
      if (vencedor == 0)
      {
         printf("Continua o jogo.\n");
      }
      
      for (int i = 0; i < 3; i++)
      {
         for (int j = 0; j < 3; j++)
         {
            auxTabuleiro[i][j] = tabuleiro[i][j];
         }
      }
   }
   

   return 0;
}