
#include <stdio.h>
#include <math.h>
#include <locale.h>

double mediaGeometrica(int numeros[]);
double mediaAritmetica(int numeros[]);
double mediaHarmonica(int numeros[]);

int main()
{
   setlocale(LC_ALL, "Portuguese");

   double mA, mG, mH, erroH, erroG, erroMedio;

   int numeros[10];

   for (int i = 0; i < 10; i++)
   {
      scanf("%d", &numeros[i]);
   }

   mA = mediaAritmetica(numeros);
   mG = mediaGeometrica(numeros);
   mH = mediaHarmonica(numeros);

   erroH = (mH - mA) / mA;
   erroG = (mG - mA) / mA;
   erroMedio = ((erroH + erroG) / 2) * 100;

   printf("Média aritmética é %.2lf\n", mA);
   printf("Média harmônica é %.2lf\n", mH);
   printf("Média geométrica é %.2lf\n", mG);
   printf("Erro médio é %.2lf %%", erroMedio);

   return 0;
}

double mediaGeometrica(int numeros[10])
{
   double rad = 1;
   for (int i = 0; i < 10; i++)
   {
      rad *= numeros[i];
   }

   double media = pow(rad, 1.0 / 10);
   return media;
}

double mediaAritmetica(int numeros[10])
{
   double soma = 0;

   for (int i = 0; i < 10; i++)
   {
      soma += numeros[i];
   }

   double media = soma / 10;

   return media;
}

double mediaHarmonica(int numeros[10])
{
   double soma = 0;

   for (int i = 0; i < 10; i++)
   {
      soma += 1 / (double)numeros[i];
   }

   double media = 10.0 / soma;
   return media;
}