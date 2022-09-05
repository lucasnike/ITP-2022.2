#include <stdio.h>
#include <string.h>

int main(){
   char numero[10] = {0};

   scanf("%s", numero);
   char numeroInvertido[10] = ;
   
   int size = strlen(numeroInvertido);
   for(int i = 0; i < size / 2; i++) {
      char primeiro = numeroInvertido[i]; //armazena o character inicial
      numeroInvertido[i] = numeroInvertido[size - i - 1]; //Troca o character da ponta oposta
      numeroInvertido[size - i - 1] = primeiro; //Armazena o character inicial no buffer
   }
   printf("%s", numeroInvertido);

   // for(int i = 0; i < 10; i++){

   //    if (numero[i] != NULL){
   //       printf("%c | %c\n", numero[i], numeroInvertido[i]);
   //    }
   // }

   return 0;
}