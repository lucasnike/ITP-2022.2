#include <stdio.h>

int get_range(int n, int cells[n], int distance, int user /*, int *left_index, int *rigth_index*/);

int main(){
    int numeroDeCelulas, alcance, posicaoDoUsuario;
    // int *left_index, *right_index;
    scanf("%d %d %d", &numeroDeCelulas, &alcance, &posicaoDoUsuario);
    int celulas[numeroDeCelulas];

    for (int i = 0; i < numeroDeCelulas; i++)
    {
        scanf("%d", &celulas[i]);
    }
    
    get_range(numeroDeCelulas, celulas, alcance, posicaoDoUsuario);

    return 0;
}

int get_range(int n, int cells[n], int distance, int user) 
{
    int qtdConexoees = 0;
    for (int i = 0; i < n; i++)
    {
        if (cells[i] <= user)
        {
            if (cells[i] + distance >= user)
            {
                printf("%d ", cells[i]);
                qtdConexoees++;
            }
        } 
        else
        {
            if (cells[i] - distance <= user)
            {
                printf("%d ", cells[i]);
                qtdConexoees++;
            }   
        }
    }

    if (qtdConexoees == 0)
    {
        printf("USUARIO DESCONECTADO");
    }
    

    return 0;
}