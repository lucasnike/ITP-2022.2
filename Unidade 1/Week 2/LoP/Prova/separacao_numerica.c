#include <stdio.h>

int main(){
   int n1;

   int numero;
   scanf("%d", &numero);

   if (numero < 9)
   {
      n1 = getchar();
      putchar("%d", n1);
   }else if (numero < 99)
   {
      n1 = getchar();
      putchar("%d\n", n1);

      n1 = getchar();
      putchar("%d", n1);
   }
   

   return 0;
}