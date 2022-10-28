#include <stdio.h>
#include <stdlib.h>
#define SIZE 16

typedef struct
{
    int B[SIZE];
    int C[SIZE];
    int D[SIZE];
} Arrays;

Arrays* separar(int *numeros);

int main()
{
    int numeros[SIZE] = {0};

    for (int i = 0; i < SIZE - 1; i++)
    {
        scanf("%d", &numeros[i]);
    }

    Arrays *array = separar(numeros);

    printf("B = [");
    for (int i = 0; i < SIZE - 1; i++)
    {

        if (array[0].B[i] != 0 && array[0].B[i + 1] == 0)
        {
            printf("%d]\n", array[0].B[i]);
        }
        else if (array[0].B[i] != 0)
        {
            printf("%d, ", array[0].B[i]);
        }
    }

    printf("C = [");
    for (int i = 0; i < SIZE - 1; i++)
    {

        if (array[0].C[i] != 0 && array[0].C[i + 1] == 0)
        {
            printf("%d]\n", array[0].C[i]);
        }
        else if (array[0].C[i] != 0)
        {
            printf("%d, ", array[0].C[i]);
        }
    }

    printf("D = [");
    for (int i = 0; i < SIZE - 1; i++)
    {

        if (array[0].D[i] != 0 && array[0].D[i + 1] == 0)
        {
            printf("%d]\n", array[0].D[i]);
        }
        else if (array[0].D[i] != 0)
        {
            printf("%d, ", array[0].D[i]);
        }
    }

    return 0;
}

Arrays* separar(int *numeros)
{
    Arrays *array = calloc(1, sizeof(Arrays)); 

    int contB = 0, contC = 0, contD = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (numeros[i] % 2 == 0 && numeros[i] != 0)
        {
            array[0].B[contB] = numeros[i];
            contB++;

            if (numeros[i] % 3 != 0)
            {
                continue;
            }
            
        }

        if (numeros[i] % 3 == 0)
        {
            array[0].C[contC] = numeros[i];
            contC++;
            continue;
        }

        array[0].D[contD] = numeros[i];
        contD++;
    }

    return array;
}