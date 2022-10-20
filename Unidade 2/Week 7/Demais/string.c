#include <stdio.h>

int main(){

    char texto[100];
    // Só aceita letras maiúsculas
    printf("Digite um texto: ");
    scanf("%[^\n]", texto);
    printf("%s\n", texto);

    return 0;
}