#include <stdio.h>

int main(){
   int player1, player2, player3, player4;

   char alfabeto[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

   scanf("%d %d %d %d", &player1, &player2, &player3, &player4);

   int totalDeDedos = player1 + player2 + player3 + player4;

   if (totalDeDedos == 0){
      printf("Ei! Ninguém colocou nada!\n");
   } else if (totalDeDedos > 26){
      totalDeDedos -= 26;
      printf("Letra: %c\n", alfabeto[totalDeDedos - 1]);
   } else if (totalDeDedos > 0){
      printf("Letra: %c\n", alfabeto[totalDeDedos - 1]);
   }

   return 0;
}