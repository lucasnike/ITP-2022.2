#include <stdio.h>

int main(){
   int inferiorEsquerdoX, inferiorEsquerdoY, superiorDireitoX, superiorDireitoY;
   int pontoX, pontoY;

   scanf("%d %d %d %d %d %d", &inferiorEsquerdoX, &inferiorEsquerdoY, &superiorDireitoX, &superiorDireitoY, &pontoX, &pontoY);

   if (pontoX >= inferiorEsquerdoX && pontoX <= superiorDireitoX && pontoY <= superiorDireitoY && pontoY >= inferiorEsquerdoY){
      printf("Dentro!\n");
   }else {
      printf("Fora!\n");
   }
   return 0;
}