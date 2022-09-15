#include <stdio.h>

int contem(float *rect1, float *rect2){


   // Testa se Rect1 contém Rect2
   if (rect2[0] > rect1[0] && rect2[2] < rect1[2] && rect2[1] > rect1[1] && rect2[3] < rect1[3])
   {
      printf("(<%.2f,%.2f>,<%.2f,%.2f>) contem (<%.2f,%.2f>,<%.2f,%.2f>).\n", rect1[0], rect1[1], rect1[2], rect1[3], rect2[0], rect2[1], rect2[2], rect2[3]);
      return 1;
   }
   
   // Testa se Rect2 contém Rect1
   if (rect1[0] > rect2[0] && rect1[2] < rect2[2] && rect1[1] > rect2[1] && rect1[3] < rect2[3])
   {
      printf("(<%.2f,%.2f>,<%.2f,%.2f>) contem (<%.2f,%.2f>,<%.2f,%.2f>).\n", rect2[0], rect2[1], rect2[2], rect2[3], rect1[0], rect1[1], rect1[2], rect1[3]);
      return 1;
   }

   printf("Nao posso afirmar!\n");
   return 0;
}

int main(){

   float tela[] = {0, 0, 0, 0};
   float rect1[] = {0, 0, 0, 0};

   scanf("%f %f %f %f", &tela[0], &tela[1], &tela[2], &tela[3]);
   do
   {
      scanf("%f %f %f %f", &rect1[0], &rect1[1], &rect1[2], &rect1[3]);

      if (rect1[0] + rect1[1] + rect1[2] + rect1[3] == 0)
      {
         break;
      }
      else
      {
         contem(tela, rect1);
      }
      
   } while (1 == 1);
   
   

   return 0;
}