#include <stdio.h>

int main(){
   int set_size_1 = 0, set_size_2 = 0;
   scanf("%d %d", &set_size_1, &set_size_2);

   int set1[set_size_1];
   int set2[set_size_2];

   int set3[set_size_1 + set_size_2];
   

   // Percorre primeiro array
   for (int i = 0; i < set_size_1; i++)
   {
      scanf("%d", &set1[i]);
   }

   // Percorre segundo array
   for (int i = 0; i < set_size_2; i++)
   {
      scanf("%d", &set2[i]);
   }

   for (int i = 0; i < set_size_1; i++)
   {
      int qtd_coincidentes = 0;
      for (int j = 0; j < set_size_2; j++)
      {
         if (set1[i] == set2[j])
         {
            qtd_coincidentes++;
         } 
      }

      if ()
      {
         
      }
      
      
   }
   
}