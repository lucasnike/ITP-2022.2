#include <stdio.h>

int main(){

   int n1, n2, resultado;
   char operador;


   do {
      scanf("%d %c %d", &n1, &operador, &n2);

      if (operador == 'F') {
         break;
      }

      if(operador == '-') {
         resultado = n1 - n2;
      } else if (operador == '+') {
         resultado = n1 + n2;
      } else if (operador == 'x'){
         resultado = n1 * n2;
      } else if (operador == '/') {
         if (n2 == 0){
            printf("Não é possível dividir por zero");
         } else {
            resultado = n1 / n2;
         }
      }

      printf("\n Resultado = %d\n", resultado);
   } while(operador != 'F');

   return 0;
}