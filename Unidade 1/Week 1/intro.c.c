#include <stdio.h>

int main(){
    int dias;
    
    printf("Digite a quantidade de dias: ");
    scanf("%d", &dias);

    int anos = dias / 365;
    int meses = dias / 30;
    dias -= (meses * 30) + (anos * 365);

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)", dias);

    return 0;
}
