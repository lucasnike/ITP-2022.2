#include <stdio.h>

int main(){
   int valores[] = {12, 23, 31, 28, 15};

   int codigoDoPedido, valorPago;

   scanf("%d %d", &codigoDoPedido, &valorPago);

   if (valorPago == valores[codigoDoPedido - 1])
   {
      printf("Deu certim!\n");
   }else if (valorPago < valores[codigoDoPedido - 1]) {
      int valorFaltando = valores[codigoDoPedido - 1] - valorPago;
      printf("Saldo insuficiente! Falta %d reais\n", valorFaltando);
   } else {
      printf("Troco = %d reais", valorPago - valores[codigoDoPedido - 1]);
   }
   return 0;
}