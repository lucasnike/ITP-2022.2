#include <stdio.h>

int main(){
   int numero1, numero2;
   scanf("%d %d",&numero1,&numero2);

   if (numero1 % 2 == 0 && numero2 % 2 == 0){
      int soma = numero1 + numero2;
      printf("%d\n",soma);
   }else if (numero1 % 2 != 0 && numero2 % 2 != 0){
      printf("Não posso somar, pois %d não é par\n",numero1);
      printf("Não posso somar, pois %d não é par\n",numero2);

   }else if(numero1 % 2 != 0){
      printf("Não posso somar, pois %d não é par", numero1);
   } else {
      printf("Não possdo somar, pois %d não é par", numero2);
   }
   
   return 0;
}