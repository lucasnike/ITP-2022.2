#include <stdio.h>

typedef struct {
  char nome[200];
  int vitorias;
  int empates;
  int derrotas;
  int gf;
  int gs;
} Time;

void ler_times(int qtd, Time *times);
void mostrar_times(int qtd, Time *times);
void bubble(int qtd, Time *times);

int main() {
  int qtd_times = 0;

  scanf("%d", &qtd_times);
  Time times[qtd_times];

  ler_times(qtd_times, times);
  bubble(qtd_times, times);
  mostrar_times(qtd_times, times);

  return 0;
}

void ler_times(int qtd, Time *times) {
  for (int i = 0; i < qtd; i++) {
    char aux;

    scanf("%[^;]%c %d %d %d %d %d", &times[i].nome, &aux, &times[i].vitorias,
          &times[i].empates, &times[i].derrotas, &times[i].gf, &times[i].gs);
  }
}

void mostrar_times(int qtd, Time *times) {
  printf("Tabela do campeonato:");
  printf("\nNome| Pontos| Jogos| Vitorias| Empates| Derrotas| Gols Pro| Gols Contra| Saldo de Gols");
  for (int i = qtd - 1; i >= 0; i--) {

    int partidas = times[i].derrotas + times[i].vitorias + times[i].empates;

    int pontos = times[i].vitorias * 3 + times[i].empates;

    int saldo_gols = times[i].gf - times[i].gs;

    printf("%s| %d| %d| %d| %d| %d| %d| %d| %d", times[i].nome, pontos,
           partidas, times[i].vitorias, times[i].empates, times[i].derrotas,
           times[i].gf, times[i].gs, saldo_gols);
  }

  printf("\n\nTimes na zona da libertadores: ");
  for(int i = qtd - 1; i >= qtd - 6; i--){
    printf("%s", times[i].nome);
  }

  printf("\n\nTimes rebaixados: ");
  for(int i = 0; i < 4; i++){
    printf("%s", times[i].nome);
  }
}

void bubble(int qtd, Time *times) {

  for (int j = 0; j < qtd; j++) {

    for (int i = 1; i < qtd; i++) {

      int pontos1 = times[i - 1].vitorias * 3 + times[i - 1].empates;
      int pontos2 = times[i].vitorias * 3 + times[i].empates;

      if (pontos1 > pontos2) {
        Time aux = times[i];
        times[i] = times[i - 1];
        times[i - 1] = aux;
      } else if(pontos1 == pontos2){
        if(times[i - 1].vitorias > times[i].vitorias){
          Time aux = times[i];
          times[i] = times[i - 1];
          times[i - 1] = aux;
        } else if (times[i - 1].vitorias == times[i].vitorias){
          if(times[i - 1].gf - times[i - 1].gs > times[i].gf - times[i].gs){
            Time aux = times[i];
            times[i] = times[i - 1];
            times[i - 1] = aux;
          }
        }
      }
    }
  }
}