#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    int idade;
    char sexo;
} Pessoa;

Pessoa criar(char nome[], int idade, int sexo);
void inserir(Pessoa *pessoas, Pessoa p);
void imprimir(Pessoa *pessoas);
void deletar(Pessoa *pessoas, Pessoa p);
int is_strings_equal(char str1[], char str2[], int size);

int main(){
    Pessoa *pessoas = calloc(1, sizeof(Pessoa));
    char escolha;

    int idade, cont = 0;
    char sexo;
    char nome[50];

    while (1 == 1)
    {
        scanf("%c", &escolha);

        switch (escolha)
        {
        case 'i':
            
            cont++;
            scanf(" %49[^\n]", nome);
            scanf("%d", &idade);
            scanf(" %c", &sexo);

            inserir(pessoas, criar(nome, idade, sexo));
            break;
        case 'd':
            scanf(" %49[^\n]", nome);
            scanf("%d", &idade);
            scanf(" %c", &sexo);

            deletar(pessoas, criar(nome, idade, sexo));
            break;

        case 'p':
            imprimir(pessoas);
            return 0;
            break;
        }
    }
    

    return 0;
}

Pessoa criar(char nome[], int idade, int sexo){
    Pessoa pessoa = {.idade = idade, .sexo = sexo};
    strcpy(pessoa.nome, nome);

    return pessoa;
}

void imprimir(Pessoa *pessoas){
    for (int i = 0; i < 100; i++)
    {
        if (pessoas[i].nome != "" && pessoas[i].sexo != "" && pessoas[i].idade != 0)
        {
            printf("%s,%d,%c\n", pessoas[i].nome, pessoas[i].idade, pessoas[i].sexo);
        }
    }
}

void inserir(Pessoa *pessoas, Pessoa p){
    for (int i = 0; i < 100; i++)
    {
        if (pessoas[i].idade == 0 && pessoas[i].sexo == 0 && pessoas[i].nome[0] == 0)
        {
            pessoas[i] = p;
            break;
        }
    }
}

void deletar(Pessoa *pessoas, Pessoa p){
    for (int i = 0; i < 99; i++)
    {
        if (pessoas[i].idade == p.idade && pessoas[i].sexo == p.sexo && is_strings_equal(p.nome, pessoas[i].nome, 50) == 1)
        {
            for (int j = i; j < 99; j++)
            {
                pessoas[j] = pessoas[j + 1];
            }
            
            break;
        }
    }
}

int is_strings_equal(char str1[], char str2[], int size){
    int diferentes = 0;
    for (int j = 0; j < size; j++)
    {
        if (str1[j] != str2[j])
        {
            diferentes++;
        }
    }

    if (diferentes == 0)
    {
        return 1;
    }

    return 0;
}
