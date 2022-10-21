#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct
{
    int numeros[100];
    int qtdDeNumeros;
} Conjunto;

void remover_itens_repitidos(int *numeros);
int *unir(Conjunto *a, Conjunto *b);
int *interseccao(Conjunto *a, Conjunto *b);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // Cria as duas variáveis do tipo Conjunto
    Conjunto A = {0}, B = {0};

    // Cria os ponteiros que vão receber os arrays alocados no heap de memória
    int *uniao, *inter;

    // Recebe a quantidade de números do conjunto A e salva todos os valores
    scanf("%d", &A.qtdDeNumeros);
    for (int i = 0; i < A.qtdDeNumeros; i++)
    {
        scanf("%d", &A.numeros[i]);
    }

    // Recebe a quantidade de números do conjunto B e salva todos os valores
    scanf("%d", &B.qtdDeNumeros);
    for (int i = 0; i < B.qtdDeNumeros; i++)
    {
        scanf("%d", &B.numeros[i]);
    }

    uniao = unir(&A, &B);
    inter = interseccao(&A, &B);

    printf("A união B == {");
    if (uniao[0] == 0)
    {

        printf("vazio}\n");
    }
    else
    {

        for (int i = 0; i < A.qtdDeNumeros + B.qtdDeNumeros; i++)
        {
            if (A.qtdDeNumeros + B.qtdDeNumeros == 1)
            {
                printf("%d}\n", uniao[0]);
                break;
            }
            else if (uniao[i] != 0 && uniao[i + 1] == 0)
            {
                printf("%d}\n", uniao[i]);
                break;
            }
            printf("%d ", uniao[i]);
        }
    }

    printf("A interseção B == {");
    if (inter[0] == 0)
    {
        printf("vazio}\n");
    }
    else
    {
        for (int i = 0; i < A.qtdDeNumeros + B.qtdDeNumeros; i++)
        {
            if (A.qtdDeNumeros + B.qtdDeNumeros == 1)
            {
                printf("%d}\n", inter[0]);
                break;
            }
            else if (inter[i] != 0 && inter[i + 1] == 0)
            {
                printf("%d}\n", inter[i]);
                break;
            }
            printf("%d ", inter[i]);
        }
    }

    return 0;
}

void remover_itens_repitidos(int *numeros)
{
    for (int i = 0; i < 99; i++)
    {
        for (int j = 0; j < 99; j++)
        {
            if (i != j && numeros[i] == numeros[j])
            {
                for (int k = j; k < 99; k++)
                {
                    numeros[k] = numeros[k + 1];
                }
            }
        }
    }
}

int *unir(Conjunto *a, Conjunto *b)
{
    int cont = 0;
    int *unionSet = calloc(198, sizeof(int));
    for (int i = 0; i < (*a).qtdDeNumeros; i++)
    {
        unionSet[cont] = (*a).numeros[i];
        cont++;
    }

    for (int i = 0; i < (*b).qtdDeNumeros; i++)
    {
        unionSet[cont] = (*b).numeros[i];
        cont++;
    }

    remover_itens_repitidos(unionSet);

    return unionSet;
}

int *interseccao(Conjunto *a, Conjunto *b)
{
    int cont = 0;
    int *inter = calloc(198, sizeof(int));

    for (int i = 0; i < (*b).qtdDeNumeros; i++)
    {
        for (int j = 0; j < (*a).qtdDeNumeros; j++)
        {
            if ((*b).numeros[i] == (*a).numeros[j])
            {
                inter[cont] = (*b).numeros[i];
                cont++;
            }
        }
    }

    for (int i = 0; i < (*a).qtdDeNumeros; i++)
    {
        for (int j = 0; j < (*b).qtdDeNumeros; j++)
        {
            if ((*a).numeros[i] == (*b).numeros[j])
            {
                inter[cont] = (*a).numeros[i];
                cont++;
            }
        }
    }

    remover_itens_repitidos(inter);

    return inter;
}