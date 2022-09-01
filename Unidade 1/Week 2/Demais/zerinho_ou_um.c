#include <stdio.h>

int main(){

   int jogadaThor, jogadaStarLord, jogadaMiranha;

   scanf("%d %d %d", &jogadaThor, &jogadaStarLord, &jogadaMiranha);

   if(jogadaThor != 0 && jogadaThor != 1 || jogadaStarLord != 0 && jogadaStarLord != 1 || jogadaMiranha != 0 && jogadaMiranha != 1)
   {
      printf("Numero digitados sao invalidos");
   }else if(jogadaThor == jogadaMiranha && jogadaMiranha == jogadaStarLord)
   {
      printf("Empate\n");
   } else if(jogadaThor != jogadaMiranha && jogadaThor != jogadaStarLord){
      printf("Thor venceu\n");
   } else if(jogadaMiranha != jogadaThor && jogadaMiranha != jogadaStarLord){
      printf("Miranha venceu\n");
   } else
   {
      printf("Star lord venceu\n");
   }

   return 0;
}