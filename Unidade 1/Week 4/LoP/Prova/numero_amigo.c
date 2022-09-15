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
      if (testa_divisor(numero, i) == 1)
      {
         soma += i;
      }
   }
   
   return soma;
}

int testa_amigos(int a, int b){
   int somaDeDivisoresA = soma_divisores(a);
   int somaDeDivisoresB = soma_divisores(b);

   if (somaDeDivisoresA == b && somaDeDivisoresB == a)
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

   int qtdAmigos = 0;

   scanf("%d %d %d %d", &interval1[0], &interval1[1], &interval2[0], &interval2[1]);

   for (int i = interval1[0]; i <= interval1[1]; i++)
   {
      for (int j = interval2[0]; j <= interval2[1]; j++)
      {
         if (j == i)
         {
            continue;
         }
         
         int isFriends = testa_amigos(i, j);
         if (isFriends == 1)
         {
            printf("O %d possui um amigo!\n", i);
            qtdAmigos++;
         }
      }
   }

   if (qtdAmigos == 0)
   {
      printf("Os intervalos nao apresentam amigos!");
   }
   

   return 0;
}