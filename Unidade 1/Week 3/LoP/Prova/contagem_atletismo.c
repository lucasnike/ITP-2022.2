#include <stdio.h>

int main(){
    int qtdEquipes = 0;
    int numeroDeAtletas = 0;
    int s = 0, c = 0, l = 0, f = 0, qtdAtletas = 0;
    char tipoDeProva;

    scanf("%d", &qtdEquipes);

    
    while (1 == 1){
        scanf("%c", &tipoDeProva);

        switch (tipoDeProva){

        case 'S':
            s++;
            break;
        
        case 'C':
            c++;
            break;
        
        case 'L':
            l++;
            break;
        case 'F':
            f++;
            break;
        }

        if(f == qtdEquipes){
            break;
        }
    }

    qtdAtletas = c + l + s;

    printf("%i %i %i %i", c, s, l, qtdAtletas);

    return 0;
}