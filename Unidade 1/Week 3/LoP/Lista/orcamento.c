#include <stdio.h>

int main(){
   int qtdTotal = 0, qtdItem = 0;;
   float valorUnitario = 0, valorTotal = 0;

   while (1 == 1)
   {
      scanf("%d", &qtdItem);

      if (qtdItem == -1)
      {
         break;
      }

      scanf("%f", &valorUnitario);

      valorTotal += qtdItem * valorUnitario;
      qtdTotal += qtdItem;

      valorUnitario = 0;
      qtdItem = 0;
   }

   printf("%d %.2f", qtdTotal, valorTotal);

   return 0;
}