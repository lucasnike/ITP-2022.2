#include <stdio.h>

int main(){
   int qtdPetalas, vingador;

   char vingadores[10][50] = {"Iron man", "Capitao America", "Homem aranha", "Viuva negra", "Thor",
   "Hulk", "Dr estranho", "Pantera negra", "Hawkeye", "GROOT"};

   printf("Digite a quantidade de petalas da flor: ");
   scanf("%d", &qtdPetalas);

   printf("\nQual vingador vai morrer? ");
   scanf("%d", &vingador);

   if(qtdPetalas % 2 == 0){
      printf("\nMal mequer\n");

      switch(vingador){
      case 0:
         printf("Irom man");
         break;
      
      case 1:
         printf("Capitao america");
         break;
      
      case 2:
         printf("Homem aranha");
         break;

      case 3:
         printf("Viuva negra");
         break;

      case 4:
         printf("Thor");
         break;

      case 5:
         printf("Hulk");
         break;

      case 6:
         printf("Dr estranho");
         break;

      case 7:
         printf("Pantera negra");
         break;

      case 8:
         printf("Hawkeye");
         break;

      case 9:
         printf("GROOT");
         break;
   }
   
   }else {
      printf("\nBem me quer\n");
   }

   return 0;
}