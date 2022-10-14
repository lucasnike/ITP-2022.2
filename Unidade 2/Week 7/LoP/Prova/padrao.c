#include <stdio.h>
#include <string.h>

int is_on_search(char text, int text_len, char *search, int search_len);

int main()
{

   char text[100] = {0};
   char search[50] = {0};

   fgets(text, 99, stdin);
   fgets(search, 49, stdin);

   int text_len = (int)strlen(text) - 1;
   int search_len = (int)strlen(search);

   // Percorre cada letra do text
   for (int i = 0; i <= text_len - search_len; i++)
   {
      int iguais = 0;
      int cont = 0;

      for (int j = i; j <= i + search_len - 1; j++)
      {
         int isOnSearch = is_on_search(text[j], text_len, search, search_len);
         if (j == i + search_len - 1 && isOnSearch == 1)
         {
            printf("%c não\n", text[j]);
            i = j;
            break;
         }

         if (text[j] != search[cont])
         {
            printf("%c não\n", text[j]);
            break;
         }
         // Se o caractere do text for igual ao do search
         else
         {
            printf("%c ", text[j]);
            cont++;
            iguais++;

            if (iguais == search_len)
            {
               printf("sim\n");
               printf("Achei o padrão no índice %d\n", i);
               return 0;
            }
         }
      }

      iguais = 0;
      cont = 0;

      if (i == text_len - search_len)
      {
         printf("Não achei o padrão\n");
         return 0;
      }
   }
}

int is_on_search(char text, int text_len, char *search, int search_len)
{
   for (int j = 0; j < search_len; j++)
   {
      if (text == search[j])
      {
         return 0;
      }
   }

   return 1;
}