#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[100];
    int marcados;
    int sofridos;
} Time;

void times(int n, Time vet[])
{
    for (int i = 0; i < n; i++)
    {
        if (vet[i + 1].marcados > vet[i].marcados)
        {
            int temp = vet[i + 1].marcados;
            vet[i + 1].marcados = vet[i].marcados;
            vet[i].marcados = temp;
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    Time jogo[n];

    for (int i = 0; i < n; i++)
    {
        scanf(" %99[^\n]s", jogo[i].nome);
        scanf("%d", &jogo[i].marcados);
        scanf("%d", &jogo[i].sofridos);
    }

    times(n, jogo);

    for (int j = 1; j < n + 1; j++)
    {
        printf("%d - %s\n", j, jogo[j - 1].nome);
        printf("Gols marcados: %d\n", jogo[j - 1].marcados);
        printf("Gols sofridos: %d\n", jogo[j - 1].sofridos);
    }

    return 0;
}