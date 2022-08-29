#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    double alturaEmPes, pesoEmLibras;
    double alturaEmMetros, pesoEmQuilos;

    printf("ALtura em pés: ");
    scanf("%lf", &alturaEmPes);

    printf("\nPeso em libras: ");
    scanf("%lf", &pesoEmLibras);

    pesoEmQuilos = pesoEmLibras / 2.205;
    alturaEmMetros = alturaEmPes / 3.281;

    printf("\n%.2lf pés são %.2lf metros\n", alturaEmPes, alturaEmMetros);
    printf("%.2lf libras são %.2lf quilos\n", pesoEmLibras, pesoEmQuilos);

    return 0;
}
