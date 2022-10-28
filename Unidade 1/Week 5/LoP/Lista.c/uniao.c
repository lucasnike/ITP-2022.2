#include <stdio.h>

void append(int size, int *arr, int n);
void bubble(int size, int *numbers);
void removerRepetidos(int *numbers, int size);

int main()
{
    int size1 = 0, size2 = 0;
    int cont = 0;
    scanf("%d %d", &size1, &size2);

    int numbers[size1 + size2 + 1];
    for (int i = 0; i < size1 + size2 + 1; i++)
    {
        numbers[i] = 0;
    }

    // Preenche o primeiro conjunto
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &numbers[cont]);
        cont++;
    }

    // Preenche o segundo conjunto
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &numbers[cont]);
        cont++;
    }

    cont++;

    removerRepetidos(numbers, cont);

    for (int i = 0; i < cont; i++)
    {
        if (numbers[i] != 0)
        {
            printf("%d ", numbers[i]);
        }
    }
}
void removerRepetidos(int *numbers, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (i != j && numbers[i] == numbers[j])
            {
                for (int k = j; k < size - 1; k++)
                {
                    numbers[k] = numbers[k + 1];
                }

                break;;
            }
        }
    }
}