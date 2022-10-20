#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int* shape(char *chave, int string_size);
void read_line( char linha[], int tam );

int main(){   
   char S[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 
   'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O',
   'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '.', ',', '?', ' ' };

   char k[10] = {0};
   char msg[200] = {0};

   read_line(k, 10);
   read_line(msg, 200);

   int msg_size = (int)strlen(msg);
   int key_size = (int)strlen(k);

   // Verifica a chave
   for (int i = 0; i < key_size; i++)
   {
      if (key_size < 0 || key_size > 4)
      {
         printf("Chave invalida!");
         return 0;
      }
      

      if (k[i] < '0' || k[i] > '9')
      {
         printf("Chave invalida!");
         return 0;
      }
      
   }
   
   // Verficida se a mensagem é válida
   for (int i = 0; i < msg_size; i++)
   {
      int iguais = 0;
      for (int j = 0; j < 40; j++)
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

   int *format = shape(k, msg_size);

   for (int i = 0; i < msg_size; i++)
   {
     for (int j = 0; j < 40; j++)
     {
         if (msg[i] == S[j])
         {
            int position = j + format[i];

            if (position > 39)
            {
               position -= 40;
            }

            msg[i] = S[position];
            break;
         }
     }
   }

   for (int i = 0; i < msg_size; i++)
   {
      printf("%c", msg[i]);
   }

   return 0;
}

int* shape(char *chave, int string_size){
   int *format;
   format = calloc(string_size, sizeof(int));
   int contador = 0;

   for (int i = 0; i < string_size; i++)
   {
      format[i] = chave[contador] - 48;

      if (contador == 3)
      {
         contador = -1;
      }

      contador++;
   }

   return format;
}

void read_line( char linha[], int tam ){

   fgets( linha, tam, stdin );

   while( linha[0] == '\n' )
   {
      fgets( linha, tam, stdin);    
   }
   if( linha[ strlen(linha) - 1 ] == '\n' ){

      linha[ strlen(linha) - 1 ] = '\0';      
   }  
}