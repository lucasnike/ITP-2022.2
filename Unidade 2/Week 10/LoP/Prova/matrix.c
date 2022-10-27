#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int nlin, ncol;
  int **mat;
} Matrix;

Matrix *createMatrix(int nlin, int ncol);
void readMatrix(Matrix *m);
void printMatrix(Matrix *m);
void destroyMatrix(Matrix **m);

int main() {
  int lin, col;
  Matrix *mat;

  scanf("%d %d", &lin, &col);
  mat = createMatrix(lin, col);
  readMatrix(mat);
  printMatrix(mat);
  destroyMatrix(&mat);
  if (mat == NULL) {
    printf("OK\n");
  }
  return 0;
}

Matrix *createMatrix(int nlin, int ncol) {
  Matrix *matrix = calloc(1, sizeof(Matrix));

  matrix->nlin = nlin;
  matrix->ncol = ncol;
  matrix->mat = calloc(nlin, sizeof(int *));

  for (int i = 0; i < nlin; i++) {
    matrix->mat[i] = calloc(ncol, sizeof(int));
  }

  return matrix;
}

void readMatrix(Matrix *m) {
  for (int i = 0; i < m->nlin; i++) {
    for (int j = 0; j < m->ncol; j++) {
      scanf("%d", &m->mat[i][j]);
    }
  }
}

void printMatrix(Matrix *m) {
  for (int i = 0; i < m->nlin; i++) {
    for (int j = 0; j < m->ncol; j++) {
      if(j == m->ncol - 1){
        printf("%d\n", m->mat[i][j]);
      } else {
        printf("%d ", m->mat[i][j]);
      }
    }
  }
}

void destroyMatrix(Matrix **m){
  free(*m);
}