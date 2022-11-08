#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

void preencher_matriz(int linhas, int colunas, char **matriz);
void percorres_matriz(int linhas, int colunas, char **matriz);

int main()
{
   // Configura??es do local para concertar o print dos caracteres especiais
   setlocale(LC_ALL, "portuguese");


   // Guarda a quantidade de linhas e colunas da matriz
   int linhas, colunas;
   scanf("%d %d", &linhas, &colunas);

   // Cria a matriz com alocação dinâmica
   char **campo = calloc(linhas, sizeof(char *));
   for (int i = 0; i < linhas; i++)
   {
      campo[i] = calloc(colunas, sizeof(char));
   }

   // Preenche a matriz com a entrada do teclado
   preencher_matriz(linhas, colunas, campo);

   percorres_matriz(linhas, colunas, campo);

   return 0;
}

// Preenche a matriz com o input do teclado
void preencher_matriz(int linhas, int colunas, char **matriz)
{
   for (int i = 0; i < linhas; i++)
   {
      for (int j = 0; j < colunas; j++)
      {
         scanf(" %c", &matriz[i][j]);
      }
   }
}

// Acha a posição do pacman na matriz
void percorres_matriz(int linhas, int colunas, char **matriz)
{
   int qtdDePontos = 0;
   for (int i = 0; i < linhas; i++)
   {
      for (int j = 0; j < colunas; j++)
      {
         if (matriz[i][j] == 'C')
         {
            printf("O pacman está na posição %d-%d\n", i+1, j+1);
         }
      }
   }
}