#include <stdio.h>

typedef struct {
    int numeros[100];
    int qtdDeNumeros;
} Conjunto;

void remover_itens_repitidos(int *numeros);

int main(){
    int nA, nB;
    Conjunto A = {0};
    Conjunto B = {0};

    scanf("%d", &nA);
    for (int i = 0; i < nA; i++)
    {
        scanf("%d", &A.numeros[i]);
    }


    scanf("%d", &nB);
    for (int i = 0; i < nB; i++)
    {
        scanf("%d", &B.numeros[i]);
    }

    remover_itens_repitidos(A.numeros);

    for (int i = 0; i < 100; i++)
    {
        printf("%d | ", A.numeros[i]);
    }
    

    return 0;
}

void remover_itens_repitidos(int *numeros){
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 99; j++)
        {
            if (i != j && numeros[i] == numeros[j])
            {
                numeros[j] = numeros[j + 1];
            }
        }
    }

    bubble(numeros);
}

void bubble(int *numeros){
    for (int i = 0; i < 100; i++)
    {
        for (int j = 1; j < 99; j++)
        {
            if (numeros[i] > numeros[j])
            {
                int aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }   
        }
    }
}