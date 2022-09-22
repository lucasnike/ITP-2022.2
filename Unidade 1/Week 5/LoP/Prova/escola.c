#include <stdio.h>

int main(){
   float numeroNaChamada;
   float auxNota = 0;
   int cont = 0;

   int qtdAprovados = 0, qtdReprovados = 0, qtdRecuperacao = 0;

   int qtdAlunos = 0;
   scanf("%d", &qtdAlunos);

   float notas[qtdAlunos + 1];
   notas[0] = 0;

   for (int i = 1; i <= qtdAlunos; i++)
   {
      char auxChar;
      scanf("%f %c %f", &numeroNaChamada, &auxChar ,&auxNota);

      if (auxNota >= 7)
      {
         qtdAprovados++;
      }
      else if(auxNota >= 5 && auxNota < 7)
      {
         qtdRecuperacao++;
      }
      else{
         qtdReprovados++;
      }

      notas[i] = auxNota;
   }

   // Laço aprovados
   printf("Aprovados: ");
   for (int i = 1; i <= qtdAlunos; i++)
   {
     if (notas[i] >= 7)
     {
         cont++;
         if (cont == qtdAprovados)
         {
            printf("%d (%.1f)\n", i, notas[i]);
            break;
         }
         
         printf("%d (%.1f), ", i, notas[i]);
     }
   }
   cont = 0;

   // Laço recuperação
   printf("Recuperação: ");
   for (int i = 1; i <= qtdAlunos; i++)
   {
     if (notas[i] < 7 && notas[i] >= 5)
     {
         cont++;
         if (cont == qtdRecuperacao)
         {
            printf("%d (%.1f)\n", i, notas[i]);
            break;
         }
         
         printf("%d (%.1f), ", i, notas[i]);
     }
   }
   cont = 0;

   // Laço reporvados
   printf("Reprovados: ");
   for (int i = 1; i <= qtdAlunos; i++)
   {
     if (notas[i] < 5)
     {
         cont++;
         if (cont == qtdReprovados)
         {
            printf("%d (%.1f)\n", i, notas[i]);
            break;
         }
         
         printf("%d (%.1f), ", i, notas[i]);
     }
   }   

   return 0;
}