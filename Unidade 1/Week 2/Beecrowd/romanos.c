#include <stdio.h>

int main(){
   int numero;
   char romano[255] = '\0';

   printf("Digite o numero para ser convertido em numeros romanos: ");
   scanf("%d", &numero);

   if (numero < 1 || numero > 1000){
      printf("\nNumero deve ser menor do quer 1001 e maior que 0\n");

      return 0;
   }

   printf("%s", romano);

   // 

   return 0;
}