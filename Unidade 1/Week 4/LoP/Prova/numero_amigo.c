#include <stdio.h>

int testa_divisor(int numero, int divisor){
   if (numero % divisor == 0)
   {
      return 1;
   } 
   else 
   {
      return 0;
   }
}

int soma_divisores(int numero){
   int soma = 0;
   for (int i = 1; i < numero; i++)
   {
      if (testa_divisor(numero, i) == 0)
      {
         soma += i;
      }
   }
   
   return soma;
}

int testa_amigos(int a, int b){
   int somaDeDivisores = soma_divisores(a);

   if (soma_divisores == b)
   {
      return 1;
   }
   else
   {
      return 0;
   }
   
}

int main(){
   int interval1[] = {0, 0};
   int interval2[] = {0, 0};

   scanf("%d %d %d %d", &interval1[0], &interval1[1], &interval2[0], &interval2[1]);

   if (interval1[0] != interval2[0] || interval1[1] != interval2[1])
   {
      printf("Os intervalos nao apresentam amigos!");
   }
   

   return 0;
}