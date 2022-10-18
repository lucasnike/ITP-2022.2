#include <stdio.h>

void troca(int *n1, int *n2);

int main(void) {

  int n1, n2;
  scanf("%d %d", &n1, &n2);
  printf("N1 = %d\nN2 = %d\n\n", n1, n2);

  troca(&n1, &n2);

  printf("N1 = %d\nN2 = %d\n\n", n1, n2);

  int *pn1 = &n1, *pn2 = &n2;
  printf("EN1 = %p\nEN2 = %p\n", pn1, pn2);
  
  return 0;
}

void troca(int *n1, int *n2) {
  int aux;

  aux = *n1;
  *n1 = *n2;
  *n2 = aux;
}