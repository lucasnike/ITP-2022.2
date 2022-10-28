#include <stdio.h>
#include <string.h>

typedef struct
{
   int par;
   int palindromo;
} Palindromo;

Palindromo ehPalindromo(char word[10]);

int main()
{
   char numero[10] = {0};

   scanf("%s", numero);

   Palindromo meuPalindromo = ehPalindromo(numero);

   if (meuPalindromo.palindromo == 1)
   {
      if (meuPalindromo.par == 1)
      {
         printf("%s é Palíndromo e par.", numero);
      }
      else
      {
         printf("%s é Palíndromo e impar.", numero);
      }
   }
   else
   {
      if (meuPalindromo.par == 1)
      {
         printf("%s não é Palíndromo e par.", numero);
      }
      else
      {
         printf("%s não é Palíndromo e impar.", numero);
      }
   }

   return 0;
}

Palindromo ehPalindromo(char word[10])
{
   Palindromo p = {0};

   int cont = strlen(word) - 1;
   int igualdades = 0;

   if (word[cont] % 2 == 0)
   {
      p.par = 1;
   }
   

   for (int i = 0; i < strlen(word); i++)
   {
      if (word[i] == word[cont])
      {
         igualdades++;
      }
      cont--;
   }

   if (igualdades == strlen(word))
   {
      p.palindromo = 1;
   }

   return p;
}