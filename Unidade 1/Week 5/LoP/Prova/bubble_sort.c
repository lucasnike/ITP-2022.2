#include <stdio.h>

int main(){

   int size = 0;
   scanf("%d", &size);

   int numbers[size];
   

   for (int i = 0; i < size; i++)
   {
      scanf("%d", &numbers[i]);
   }
   

   for (int j = 0; j < size; j++)
   {
      
      for (int i = 0; i < size; i++)
      {
         if (size == (i + 1))
         {
            printf("%d\n", numbers[i]);
         }
         else
         {
            printf("%d ", numbers[i]);
         }
      }
      
      

      for (int i = 1; i < size; i++)
      {
         if (numbers[i - 1] > numbers[i])
         {
            int aux = numbers[i];
            numbers[i] = numbers[i - 1];
            numbers[i - 1] = aux;
         }
      }
   }

   return 0;
}