#include <stdio.h>
#include <string.h>

typedef struct
{
   int numero;
   char nome[50];
   int votos;

} Partido;

int compute_votes(int numeroDeVotos, int votes[numeroDeVotos], int numeroDePartidos, Partido partidos[numeroDePartidos], Partido *maisVotado, Partido *segundoMaisVotado);

int main()
{
   int numeroDePartidos = 0, numeroDeVotos = 0;
   Partido maisVotado = {0}, segundoMaisVotado = {0};
   int votosValidos = 0;
   scanf("%d", &numeroDePartidos);

   Partido partidos[numeroDePartidos];

   for (int i = 0; i < numeroDePartidos; i++)
   {
      scanf("%d %s", &partidos[i].numero, partidos[i].nome);
      partidos[i].votos = 0;
   }

   scanf("%d", &numeroDeVotos);
   int votos[numeroDeVotos];
   for (int i = 0; i < numeroDeVotos; i++)
   {
      scanf("%d", &votos[i]);
   }

   votosValidos = compute_votes(numeroDeVotos, votos, numeroDePartidos, partidos, &maisVotado,&segundoMaisVotado);

   printf("VENCEDOR: %s (%d votos = %.2f%%)\n", maisVotado.nome, maisVotado.votos, (float)100 * maisVotado.votos / votosValidos);

   printf("VICE: %s (%d votos = %.2f%%)", segundoMaisVotado.nome, segundoMaisVotado.votos, (float)100 * segundoMaisVotado.votos / votosValidos);


   return 0;
}

int compute_votes(int numeroDeVotos, int votes[numeroDeVotos], int numeroDePartidos, Partido partidos[numeroDePartidos], Partido *maisVotado, Partido *segundoMaisVotado)
{
   int votosValidos = 0;
   Partido pmaisVotado = {0}, psegundo = {0};

   // Computa os votos válidos
   for (int i = 0; i < numeroDeVotos; i++)
   {
      for (int j = 0; j < numeroDePartidos; j++)
      {
         if (partidos[j].numero == votes[i])
         {
            partidos[j].votos++;
            votosValidos++;
            break;
         }
      }
   }

   // Pega partido mais votado
   for (int i = 0; i < numeroDePartidos; i++)
   {
      if (partidos[i].votos >= pmaisVotado.votos)
      {
         pmaisVotado = partidos[i];
      }
   }

   // Pega o segundo partido mais votado
   for (int i = 0; i < numeroDePartidos; i++)
   {
      if (partidos[i].votos >= psegundo.votos && strcmp(partidos[i].nome, pmaisVotado.nome) != 0)
      {
         psegundo = partidos[i];
      }
   }

   *maisVotado = pmaisVotado;
   *segundoMaisVotado = psegundo;

   return votosValidos;
}