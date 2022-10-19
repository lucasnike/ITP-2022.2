#include <stdio.h>

void computar_votos(int n, int votos[n], int *mais_votado, int *segundo);

int main() {
  int n = 0, mais_votado = 0, segundo_mais_votado = 0;
  scanf("%d", &n);
  int votos[n];

  for (int i = 0; i < n; i++) {
    scanf("%d", &votos[i]);
  }

  computar_votos(n, votos, &mais_votado, &segundo_mais_votado);

  printf("%d %d", mais_votado, segundo_mais_votado);

  return 0;
}

void computar_votos(int n, int votos[n], int *mais_votado, int *segundo) {
  int qtdVotos[10] = {0};

  for (int i = 0; i < n; i++) {
    qtdVotos[votos[i] - 1] += 1;
  }

  *mais_votado = qtdVotos[0];
  for (int i = 1; i < 10; i++) {
    if (*mais_votado < qtdVotos[i]) {
      *mais_votado = qtdVotos[i];
    }
  }

  for (int i = 0; i < 10; i++) {
    if (*mais_votado == qtdVotos[i]) {
      *mais_votado = i + 1;
      qtdVotos[i] = 0;
      break;
    }
  }

  *segundo = qtdVotos[0];
  for (int i = 1; i < 10; i++) {
    if (*segundo < qtdVotos[i]) {
      *segundo = qtdVotos[i];
    }
  }

  for (int i = 0; i < 10; i++) {
    if (*segundo == qtdVotos[i]) {
      *segundo = i + 1;
      break;
    }
  }
}