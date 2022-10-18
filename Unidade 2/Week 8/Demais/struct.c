#include <stdio.h>
#include <string.h>

int main(){

  // Sem typedef
  struct Agenda{
    char evento[200];
    int hora_i, minutos_i;
    int hora_f, minutos_f; 
  };

  struct Agenda evento = {.evento = "Jogar Lol", .hora_i = 18, .minutos_i = 30, .hora_f = 21, .minutos_f = 0};

  printf("Struct evento\n\n%s\nDe %2d:%2d\nAté %2d:0%d\n", evento.evento, evento.hora_i, evento.minutos_i, evento.hora_f, evento.minutos_f);

  // Com typedef

  typedef struct{
    char rua[200];
    int numero;
    char cep[10];
  } Endereco ;

  Endereco meu_endereco;
  strcpy(meu_endereco.cep,  "59296274");
  strcpy(meu_endereco.rua, "Rua vereador maurício fernandes");
  meu_endereco.numero = 136;

  printf("\n\nStruc endereço\n\nEu moro na rua %s\nCasa número %d\nCEP: %s\n", meu_endereco.rua, meu_endereco.numero, meu_endereco.cep);
  
  return 0;
}