#include <stdio.h>

int menor_numero(int x, int y){
   if (x > y)
   {
      return y;
   }
   else {
      return x;
   }
   
}

int calcular_MDC(int x, int y){
   int mdc = 0;

   if (y == 0)
   {
      return x;
   }
   else if(x == 0){
      return y;
   }

   for (int i = 1; i <= menor_numero(x, y); i++)
   {
      if (x % i == 0 && y % i == 0)
      {
         mdc = i;
      }
      
   }
   
   return mdc;
}

int main(){
   int x, y;

   scanf("%d %d", &x, &y);

   int mdc = calcular_MDC(x, y);

   printf("MDC(%d , %d) = %d", x, y, mdc);

   return 0;
}