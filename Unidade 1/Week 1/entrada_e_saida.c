#include <stdio.h>
#define MAX 10

int main(){
    printf("Hello world !!!\n");

    const double PI = 3.1415;

    printf("%lf\n", PI);
    printf("%i\n", MAX);

    char nome[] = "";
    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Ola %s", nome);


    return 0;
}
