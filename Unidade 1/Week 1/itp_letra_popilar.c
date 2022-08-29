#include <stdio.h>

int main(){
    char letra;
    scanf("%c", &letra);

    int aparicoesDasLetras;
    scanf("%d", &aparicoesDasLetras);

    float indicePopularidade;
    scanf("%f", &indicePopularidade);

    float popularidade = aparicoesDasLetras * indicePopularidade;

    printf("A popularidade de %c é %.1f", letra, popularidade);
    return 0;
}
