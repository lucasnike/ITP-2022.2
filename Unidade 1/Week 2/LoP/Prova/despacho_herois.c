#include <stdio.h>

int main(){

    int numeroDeHerois, classeDoHeroi, classeDoMostro;

    scanf("%d %d %d", &numeroDeHerois, &classeDoHeroi, &classeDoMostro);

    if (classeDoHeroi == 5)
    {
        printf("Heróis vencerão!");
    }else if (classeDoHeroi - classeDoMostro == 1)
    {
        if (numeroDeHerois > 0)
        {
            printf("Heróis vencerão!");
        }
        
    }else if (classeDoHeroi == classeDoMostro){
        if (numeroDeHerois >= 3)
        {
            printf("Heróis vencerão!");
        }else {
            printf("Melhor chamar Saitama!");
        }
        
    }else { // classe do heroi menor do que a do monstro
        printf("Melhor chamar Saitama!");
    }
    
    return 0;
}