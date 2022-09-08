#include <stdio.h>

int main()
{
    int numeroDeLinhas = 0, n = 1;
    scanf("%d", &numeroDeLinhas);

    if (numeroDeLinhas <= 0)
    {
        printf("Você entrou com %d, tente de novo na próxima", numeroDeLinhas);

        return 0;
    }

    for (int i = 1; i < numeroDeLinhas + 1; i++)
    {
        for (int j = 0; j < i; j++)
        {

            if (j == i - 1)
            {
                printf("%2d\n", n);
            }
            else
            {
                printf("%2d ", n);
            }

            n++;
        }
    }

    return 0;
}