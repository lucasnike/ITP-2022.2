
#include <stdio.h>
#include <math.h>
#include <locale.h>

double mediaGeometrica(int numeros[]){
   double rad = 1;
   for (int i = 0; i < 10; i++)
   {
      rad *= numeros[i];
   }
   
   double media = pow(rad, 1.0 / 10);
   return media;
}

double mediaAritmetica(int numeros[]){
   double soma = 0;

   for (int i = 0; i < 10; i++)
   {
      soma += numeros[i];
   }

   double media = soma / 10;
   
   return media;
}

double mediaHarmonica(int numeros[]){
   double soma = 0;

   for (int i = 0; i < 10; i++)
   {
      soma += 1 / numeros[i];
   }
   
   double media = 10 / soma;
   return 0;
}

int main(){
   setlocale(LC_ALL, "PT");

   double mA, mG, mH;

   int numeros[10];

   for (int i = 0; i < 10; i++)
   {
      scanf("%d", &numeros[i]);
   }
   
   mA = mediaAritmetica(numeros);
   mG = mediaGeometrica(numeros);
   mH = mediaHarmonica(numeros);
   
   printf("Média aritmética é %.2lf\n", mA);
   printf("Média harmônica é %.2lf\n", mH);
   printf("Média geométrica é %.2lf\n", mG);

   return 0;
}