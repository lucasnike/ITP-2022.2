#include <stdio.h>

int main(){

    char letra;

    while (scanf("%c", &letra) != EOF)
    {
        // Se a letra digitada for minúscula
        if (letra >= 97 && letra <= 122)
        {
            printf("%c\n", letra - 32);
        }
    }
    
    long long int a = 1;
    printf("My long number: %lld\n", a);

    return 0;
}