#include <stdio.h>
#include <string.h>

typedef struct {
  char nome[200];
  int gm;
  int gs;
} Time;

void ordenar(int qtd, Time *times);
void ler_times(int qtd, Time *times);
void mostrar(int qtd, Time *times);

int main() {
  int qtd = 0;
  scanf("%d", &qtd);

  Time times[qtd];

  ler_times(qtd, times);
  ordenar(qtd, times);
  mostrar(qtd, times);

  return 0;
}

// Faz um Bubble sort no array dos times
void ordenar(int qtd, Time *times) {
  for (int j = 0; j < qtd; j++) {
    for (int i = 1; i < qtd; i++) {
      if (times[i - 1].gm < times[i].gm) {
        Time aux = times[i];
        times[i] = times[i - 1];
        times[i - 1] = aux;
      }
    }
  }
}

// Lê do teclado todas as informações dos times
void ler_times(int qtd, Time *times) {
  for (int i = 0; i < qtd; i++) {

    scanf(" %199[^\n]", times[i].nome);
    scanf("%d", &times[i].gm);
    scanf("%d", &times[i].gs);
  }
}

// Mostra todos os times no formato especificado
void mostrar(int qtd, Time *times) {
  for (int i = 0; i < qtd; i++) {
    printf("%d - %s\n", i + 1, times[i].nome);
    printf("Gols marcados: %d\n", times[i].gm);
    printf("Gols sofridos: %d\n", times[i].gs);
  }
}