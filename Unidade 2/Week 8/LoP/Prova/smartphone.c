#include <stdio.h>

typedef struct {
    char modelo[40];
    int memoria;
    float processador;
    float camera;
    float bateria;
} Telefone;

int cadastrar_smartphone(int qtd, Telefone *telefones);
int pesquisar_smartphones(int qtd, Telefone *telefones, Telefone req_min);

int main(){
    int telefonesCadastrados = 0, qtd_validos = 0;
    char choice = ' ';
    Telefone telefones[100];

    Telefone novo;

    while (1 == 1)
    {
        scanf("%c", &choice);

        if (choice == 's')
        {
            telefonesCadastrados = cadastrar_smartphone(telefonesCadastrados, telefones);
        }
        else
        {
            break;
        }
    }

    scanf("%d %f %f %f", &novo.memoria, &novo.processador, &novo.camera, &novo.bateria);
    qtd_validos = pesquisar_smartphones(telefonesCadastrados, telefones, novo);
    printf("%d smartphones encontrados.", qtd_validos);

    return 0;
}

int cadastrar_smartphone(int qtd, Telefone *telefones){
    Telefone novo;
    scanf(" %49[^\n]", novo.modelo);
    scanf(" %d %f %f %f ", &novo.memoria, &novo.processador, &novo.camera, &novo.bateria);
    telefones[qtd] = novo;
    return qtd + 1;
}

int pesquisar_smartphones(int qtd, Telefone *telefones, Telefone req_min){
    int qtd_validos = 0;
    for (int i = 0; i < qtd; i++)
    {
        if (telefones[i].bateria >= req_min.bateria && telefones[i].memoria >= req_min.memoria && telefones[i].camera >= req_min.camera && telefones[i].processador >= req_min.processador)
        {
            qtd_validos++;
            printf("Modelo: %s\n", telefones[i].modelo);
            printf("Memoria: %dGB\n", telefones[i].memoria);
            printf("Processador: %.2fGhz\n", telefones[i].processador);
            printf("Camera: %.2fMPixels\n", telefones[i].camera);
            printf("Bateria: %.2fmA\n\n", telefones[i].bateria);
        }
    }

    return qtd_validos;
}