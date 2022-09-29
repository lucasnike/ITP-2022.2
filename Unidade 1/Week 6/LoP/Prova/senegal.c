#include <stdio.h>

int calcular_aposta(int largura, int altura, char cor, int inicial);

int main(){
   int inicial = 0, largura = 0, altura = 0;
   char cor = "";
   scanf("%d %d %c", &largura, &inicial, &cor);

   altura = largura * 2 / 3;
   
   int valor_aposta = calcular_aposta(largura, altura, cor, inicial);

   printf("%d", valor_aposta);

   return 0;
}

int calcular_aposta(int largura, int altura, char cor, int inicial){
   int valor;

   valor = altura * largura / 3;

   if (cor == 'Y') {
      valor *= (inicial + 2);
   } else if (cor == 'G') {
      valor *= (inicial + 1);
   } else {
      valor *= (inicial + 3);
   }
   
   return valor;
}