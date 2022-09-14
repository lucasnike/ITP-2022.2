#include <stdio.h>
#include <locale.h>

int main(){
   setlocale(LC_ALL, "Portuguese");

   // Representa os tr�s lados de um tri�ngulo arbitr�rio
   int l1, l2, l3;

   printf("Digite o valor de tr�s lados de um tri�ngulo: ");
   scanf("%d %d %d", &l1, &l2, &l3);

   // Verifica se a exist�ncia do tri�ngulo � poss�vel
   if (l1 + l2 > l3 && l2 + l3 > l1 && l1 + l3 > l2)
   {
      printf("\nA EXIST�NCIA DESTE TRI�NGULO � POSS�VEL\n");
   } 
   else
   {
      printf("A EXIST�NCIA DO TRI�NGULO N�O � POSS�VEL\n");
      return 0;
   }

   
   if (l1 == l2 && l2 == l3)
   {
      printf("O TRI�NGULO � EQUIL�TERO\n");
   }
   else if (l1 != l2 && l2 != l3 && l3 != l1)
   {
      printf("O TRI�NGULO � ESCALENO\n");
   }
   else
   {
      printf("O TRI�NGULO � IS�CELES\n");
   }

   return 0;
}