#include <stdio.h>

char* criptografar(char *mensagem);

int main(){
   const char DIGITS[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
   
   const char S[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 
   'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O',
   'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '.', ',', '?', ' ' };

   char k[4] = {0};
   char msg[200] = {0};

   scanf("%s", &k);
   scanf("%s", &msg);


   for (int i = 0; i < sizeof(k); i++)
   {
      int iguais = 0;
      for (int j = 0; j < sizeof(DIGITS); j++)
      {
         if(k[i] == DIGITS[j]){
            iguais++;
         }
      }
      
      if (iguais == 0)
      {
         printf("Chave invalida!");
         return 0;
      }
   }
   
   for (int i = 0; i < sizeof(msg); i++)
   {
      int iguais = 0;
      for (int j = 0; j < sizeof(S); j++)
      {
         if(msg[i] == S[j]){
            iguais++;
         }
      }
      
      if (iguais == 0)
      {
         printf("Caractere invalido na entrada!");
         return 0;
      }
   }

   return 0;
}

char* criptografar(char *mensagem){

}
