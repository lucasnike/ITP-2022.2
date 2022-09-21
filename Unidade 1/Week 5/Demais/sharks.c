#include <stdio.h>
#include <locale.h>


int main(){
   setlocale(LC_ALL, "Portuguese");

   char tubaroes[14][50] = {"Tubar�o Branco", "Tubar�o Martelo", "Tubar�o Touro", 
   "Tubar�o Baleia", "Tubar�o Lixa", "Tubar�o Frade", "Tubar�o Tigre", "Tubar�o Cabe�a-Chata", 
   "Tubar�o Serra", "Tubar�o de Pontas Negras", "Tubar�o Raposa", "Tubar�o Mako", 
   "Tubar�o Bruxa", "Tubar�o Azul"};

   int qtdTubaroesFotografados = 0;
   int tubaroesFotografados[14] = {0};
   int tubaraoEscolhido = 0;
   int especiesDiferentes = 0;
   

   scanf("%d", &qtdTubaroesFotografados);

   for (int i = 0; i < qtdTubaroesFotografados; i++)
   {
      scanf("%i", &tubaraoEscolhido);

      if (tubaraoEscolhido < 1 && tubaraoEscolhido > 14)
      {
         return 0;
      }

      if (tubaroesFotografados[tubaraoEscolhido - 1] == 0)
      {
         tubaroesFotografados[tubaraoEscolhido - 1] = 1;
         especiesDiferentes++;
      }
   }

   
   printf("%d esp�cies diferentes.\n", especiesDiferentes);

   for (int i = 0; i < 14; i++)
   {
      if (tubaroesFotografados[i] == 1)
      {
         printf("%s\n", tubaroes[i]);
      }
   }
   

   return 0;
}