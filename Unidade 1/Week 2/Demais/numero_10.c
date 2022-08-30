#include <stdio.h>

int main(){
   printf("Digite um numero: ");

   int n;

   scanf("%i", &n);

   if(n == 10){
      printf("Uau, nota 10\n");
   } else {
      printf("Ahh tudo bem\n");
   }

   return 0;
}