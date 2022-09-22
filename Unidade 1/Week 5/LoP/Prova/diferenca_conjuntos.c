#include <stdio.h>

void bubble(int size, int *numbers);

int main(){
   int set_size_1 = 0, set_size_2 = 0, qtdUnicos = 0;
   scanf("%d %d", &set_size_1, &set_size_2);

   int set1[set_size_1];
   int set2[set_size_2];
   

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

   bubble(set_size_1, set1);
   bubble(set_size_2, set2);
   
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

      if (qtd_coincidentes == 0)
      {
         qtdUnicos++;
      }
   }

   for (int i = 0; i < set_size_2; i++)
   {
      int qtd_coincidentes = 0;
      for (int j = 0; j < set_size_1; j++)
      {
         if (set2[i] == set1[j])
         {
            qtd_coincidentes++;
         }
         
      }

      if (qtd_coincidentes == 0)
      {
         qtdUnicos++;
      }
   }

   int set3[qtdUnicos];
}

void bubble(int size, int *numbers){
   for (int j = 0; j < size; j++)
   {
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
}