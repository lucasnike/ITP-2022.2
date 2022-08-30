#include <stdio.h>

int main(){
   char numeroString[6];

   scanf("%s", &numeroString);

   for (int i = 0; i < sizeof(numeroString); i++)
   {
      if (i == 0){
         printf("%c", numeroString[i]);
      }else if (numeroString[i] != NULL){
         printf("\n%c", numeroString[i]);
      }

   }

   return 0;
}