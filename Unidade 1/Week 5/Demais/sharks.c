#include <stdio.h>
#include <locale.h>


int main(){
   setlocale(LC_ALL, "Portuguese");

   char tubaroes[14][50] = {"Tubarão Branco", "Tubarão Martelo", "Tubarão Touro", 
   "Tubarão Baleia", "Tubarão Lixa", "Tubarão Frade", "Tubarão Tigre", "Tubarão Cabeça-Chata", 
   "Tubarão Serra", "Tubarão de Pontas Negras", "Tubarão Raposa", "Tubarão Mako", 
   "Tubarão Bruxa", "Tubarão Azul"};

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

   
   printf("%d espécies diferentes.\n", especiesDiferentes);

   for (int i = 0; i < 14; i++)
   {
      if (tubaroesFotografados[i] == 1)
      {
         printf("%s\n", tubaroes[i]);
      }
   }
   

   return 0;
}