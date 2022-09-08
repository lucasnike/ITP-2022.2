#include <stdio.h>

int main(){
    int linhas;
    char letra;

    scanf("%d %c", &linhas, &letra);

    if(linhas % 2 == 1){
        linhas--;
    }

    for(int i = 0; i < linhas; i++){
        printf("%c\n", letra * 2);
    }

    return 0;
}