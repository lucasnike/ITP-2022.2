#include <stdio.h>

int main(){

   float tempoMaxiomo = 0;
   int numeroDeAtletasAptos = 0;
   int qtdSeries = 0;
   float tempoIndividual = 0;

   scanf("%f", &tempoMaxiomo);

   while (1 == 1)
   {
      scanf("%f", &tempoIndividual);

      if (tempoIndividual == -1){
         break;
      }

      if (tempoIndividual <= tempoMaxiomo)
      {
         numeroDeAtletasAptos++;
      }
   }

   if (numeroDeAtletasAptos < 8)
   {
      if (numeroDeAtletasAptos == 0) {
         qtdSeries = 0;
      } else {
         qtdSeries = 1;
      }
   } else if (numeroDeAtletasAptos % 8 == 0) {
      qtdSeries = numeroDeAtletasAptos / 8;
   } else {
      qtdSeries = (numeroDeAtletasAptos / 8) + 1;
   }
   
   printf("%d %d", numeroDeAtletasAptos, qtdSeries);

   return 0;
}