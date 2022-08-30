#include <stdio.h>

int main(){
    int numero1, numero2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    int soma = numero1 + numero2;

    printf("\nA soma de %.1d e %.1d = %.1d\n", numero1, numero2, soma);
    return 0;
}