#include <stdio.h>

// 1 2 4

int main(){

    int numeroDeHerois, classeDoHeroi, classeDoMostro;

    scanf("%d %d %d", &numeroDeHerois, &classeDoHeroi, &classeDoMostro);

    if (classeDoHeroi > classeDoMostro)
    {
        if (classeDoHeroi - classeDoMostro == 1)
        {
            if (numeroDeHerois >= 3)
            {
                printf("Heróis vencerão!");
            }else {
                printf("Melhor chamar Saitama!");
            }
            
        }
        
        printf("Heróis vencerão!");
    }else if (classeDoHeroi == classeDoMostro){

    }else { // classe do heroi menor do que a do monstro
        printf("Melhor chamar Saitama!");
    }
    

    return 0;
}