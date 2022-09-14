#include <stdio.h>
#include <locale.h>

int main(){
   setlocale(LC_ALL, "Portuguese");

   // Representa os três lados de um triângulo arbitrário
   int l1, l2, l3;

   printf("Digite o valor de três lados de um triângulo: ");
   scanf("%d %d %d", &l1, &l2, &l3);

   // Verifica se a existência do triângulo é possível
   if (l1 + l2 > l3 && l2 + l3 > l1 && l1 + l3 > l2)
   {
      printf("\nA EXISTÉNCIA DESTE TRIÂNGULO É POSSÍVEL\n");
   } 
   else
   {
      printf("A EXISTÊNCIA DO TRIÂNGULO NÃO É POSSÍVEL\n");
      return 0;
   }

   
   if (l1 == l2 && l2 == l3)
   {
      printf("O TRIâNGULO É EQUILÁTERO\n");
   }
   else if (l1 != l2 && l2 != l3 && l3 != l1)
   {
      printf("O TRIÂNGULO É ESCALENO\n");
   }
   else
   {
      printf("O TRIÂNGULO É ISÓCELES\n");
   }

   return 0;
}