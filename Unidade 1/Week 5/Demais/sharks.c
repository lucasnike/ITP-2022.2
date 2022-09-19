#include <stdio.h>
#include <locale.h>

int contem(int escolha, int *jaInformados){

   int qtdElementosContidos = 0;

   for (int i = 0; i < 14; i++)
   {
      if (jaInformados[i] == escolha)
      {
         qtdElementosContidos++;
      }
   }

   if (qtdElementosContidos > 0)
   {
      return 1;
   }
   else
   {
      return 0;
   }
   
   return 0;
}

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

      for (int j = 0; i < 14; j++)
      {
         if (tubaroesFotografados[j] == 0 )
         {
            if (contem(tubaraoEscolhido, tubaroesFotografados) == 0)
            {
               tubaroesFotografados[j] = tubaraoEscolhido;
               especiesDiferentes++;
            }
         }
      }
   }

   
   printf("%d espécies diferentes.", especiesDiferentes);

   for (int i = 0; i < qtdTubaroesFotografados; i++)
   {
      if (tubaroesFotografados[i] != 0)
      {
         printf("%s", tubaroes[i]);
      }
   }
   

   return 0;
}