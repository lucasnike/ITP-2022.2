#include <stdio.h>

int main(){

   int aprovados[50][2] = {0};
   int reprovados[50][2] = {0};
   int recuperacao[50][2] = {0};

   int qtdAlunos = 0;
   float auxNota = 0;
   float numeroNaChamada = 0;
   int qtdAprovados = 0, qtdReprovados = 0, qtdRecuperacao = 0;

   scanf("%d", &qtdAlunos);

   for (int i = 0; i < qtdAlunos; i++)
   {
      char auxChar;
      scanf("%f %c %f", &numeroNaChamada, &auxChar ,&auxNota);

      if (auxNota >= 7)
      {
         aprovados[i][i + 1] = auxNota;
         aprovados[i][i] = numeroNaChamada;
      }
      else if (auxNota >= 5 && auxNota < 7){
         recuperacao[i][i] = numeroNaChamada;
         recuperacao[i][i + 1] = auxNota;
      }
      else {
         reprovados[i][i + 1] = auxNota;
         reprovados[i][i] = numeroNaChamada;
      }
   }

   
   for (int i = 0; i < 50; i++)
   {
      if (aprovados[i][i + 1] != NULL && aprovados[i][i + 1] != 0)
      {
         qtdAprovados++;
      }
   }

   printf("Aprovados = %d", qtdAprovados);
   

   return 0;
}