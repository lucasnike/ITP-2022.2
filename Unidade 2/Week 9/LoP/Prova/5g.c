#include <stdio.h>

int get_range(int n, int cells[n], int distance, int user, int *left_index, int *right_index);

int main()
{
    int numeroDeCelulas, alcance, posicaoDoUsuario;
    int left_index = 0, right_index = 0, qtdConexoes = 0;
    scanf("%d %d %d", &numeroDeCelulas, &alcance, &posicaoDoUsuario);
    int celulas[numeroDeCelulas];

    for (int i = 0; i < numeroDeCelulas; i++)
    {
        scanf("%d", &celulas[i]);
    }

    qtdConexoes = get_range(numeroDeCelulas, celulas, alcance, posicaoDoUsuario, &left_index, &right_index);

    for (int i = 0; i < numeroDeCelulas; i++)
    {
        if (celulas[i] >= left_index && celulas[i] <= right_index)
        {
            printf("%d ", celulas[i]);
        }
    }

    if (qtdConexoes == 0)
    {
        printf("USUARIO DESCONECTADO");
    }

    return 0;
}

int get_range(int n, int cells[n], int distance, int user, int *left_index, int *right_index)
{

    int qtdConexoes = 0;
    *left_index = user - distance;
    *right_index = 0;

    int aux = user + distance;

    for (int i = 0; i < n; i++)
    {
        if (cells[i] >= *left_index)
        {
            *left_index = cells[i];
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (aux >= cells[i])
        {
            *right_index = cells[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (cells[i] <= user)
        {
            if (cells[i] + distance >= user)
            {
                qtdConexoes++;
            }
        }
        else
        {
            if (cells[i] - distance <= user)
            {
                qtdConexoes++;
            }
        }
    }

    return qtdConexoes;
}