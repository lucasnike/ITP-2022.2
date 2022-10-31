#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 1000

typedef struct{
    char nome[50];
    int idade;
    char sexo;
} Pessoa;

Pessoa criar(char nome[], int idade, int sexo);
void inserir(Pessoa *pessoas, Pessoa p, int cont);
void imprimir(Pessoa *pessoas, int cont);
void deletar(Pessoa *pessoas, Pessoa p);

int main(){
    setlocale(LC_ALL, "Portuguese");
    Pessoa *pessoas = calloc(MAX, sizeof(Pessoa));
    char escolha;

    int idade, cont = 0;
    char sexo;
    char nome[50];

    while (1)
    {
        scanf("%c", &escolha);

        switch (escolha)
        {
        case 'i':
            scanf(" %49[^\n]", nome);
            scanf("%d", &idade);
            scanf(" %c", &sexo);

            inserir(pessoas, criar(nome, idade, sexo), cont + 1);
            cont++;
            pessoas = realloc(pessoas, cont + 1);
            break;
        case 'd':
            scanf(" %49[^\n]", nome);
            scanf("%d", &idade);
            scanf(" %c", &sexo);

            deletar(pessoas, criar(nome, idade, sexo));
            break;

        case 'p':
            imprimir(pessoas, cont);
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

void imprimir(Pessoa *pessoas, int cont){
    for (int i = 0; i < cont; i++)
    {
        if (pessoas[i].nome != "" && pessoas[i].sexo != "" && pessoas[i].idade != 0)
        {
            printf("%s,%d,%c\n", pessoas[i].nome, pessoas[i].idade, pessoas[i].sexo);
        }
    }
}

void inserir(Pessoa *pessoas, Pessoa p, int cont){
    for (int i = 0; i < cont; i++)
    {
        if (pessoas[i].idade == 0 && pessoas[i].sexo == 0 && pessoas[i].nome[0] == 0)
        {
            pessoas[i] = p;
            break;
        }
    }
}

void deletar(Pessoa *pessoas, Pessoa p){
    for (int i = 0; i < MAX - 1; i++)
    {
        if (pessoas[i].idade == p.idade && pessoas[i].sexo == p.sexo && strcmp(p.nome, pessoas[i].nome) == 0)
        {
            for (int j = i; j < MAX - 1; j++)
            {
                pessoas[j] = pessoas[j + 1];
            }
            
            break;
        }
    }
}