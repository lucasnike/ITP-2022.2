#include <stdio.h>

int main(){
   int superiorEsquerdoX, superiorEsquerdoY, inferiorDireitoX, inferiorDireitoY;
   int pontoX, pontoY;


   scanf("%d %d %d %d %d %d", &superiorEsquerdoX, &superiorEsquerdoY, &inferiorDireitoX, &inferiorDireitoY, &pontoX, &pontoY);

   printf("%d e %d e %d e %d\n", superiorEsquerdoX, superiorEsquerdoY, inferiorDireitoX, inferiorDireitoY);
   printf("%d e %d\n", pontoX, pontoY);

   if (pontoX >= superiorEsquerdoX && pontoX <= inferiorDireitoX && pontoY >= inferiorDireitoY && pontoY <= superiorEsquerdoY){
      printf("Dentro!\n");
   }else {
      printf("Fora!\n");
   }
   return 0;
}