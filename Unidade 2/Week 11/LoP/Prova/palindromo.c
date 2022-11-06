#include <stdio.h>
#include <string.h>

void read_line(char entrada[], int max, FILE *f);
int wrapper(char *palavra);
int is_palindrome(char *palavra, int inicio, int fim);
void remove_white_spaces(char *word);

int main()
{
   char texto[200] = {0};
   char aux_texto[200] = {0};


   read_line(texto, 200, stdin);
   strcpy(aux_texto, texto);

   int palindrome = wrapper(aux_texto);

   if (palindrome == 1)
   {
      printf("O texto \"%s\" é palíndromo", texto);
   }
   else {
      printf("O texto \"%s\" não é palíndromo", texto);
   }
   

   return 0;
}

int wrapper(char *palavra)
{
   
   remove_white_spaces(palavra);
   int tamanho = strlen(palavra);
   int palindrome = is_palindrome(palavra, 0, tamanho - 1);

   return palindrome;
}

void remove_white_spaces(char *word)
{
   int size = strlen(word);

   for (int i = 0; i < size; i++)
   {
      if (word[i] == 32)
      {
         for (int j = i; j < size; j++)
         {

            if (j == size - 1)
            {
               word[j] = 0;
            }
            else
            {
               word[j] = word[j + 1];
            }
         }
      }
   }
}

int is_palindrome(char *palavra, int inicio, int fim)
{
   // printf("%c  %c\n", palavra[inicio], palavra[fim]);
   if (palavra[inicio] == palavra[fim] && fim - inicio <= 1)
   {
      return 1;
   }
   else if (palavra[inicio] == palavra[fim])
   {
      is_palindrome(palavra, inicio + 1, fim - 1);
   }
   else if(palavra[inicio] != palavra[fim]){
      return 0;
   }
}

void read_line(char entrada[], int max, FILE *f)
{
   do
      fgets(entrada, max, f);
   while (entrada[0] == '\n');
   int tam = strlen(entrada);
   if (entrada[tam - 1] == '\n')
      entrada[tam - 1] = '\0';
}