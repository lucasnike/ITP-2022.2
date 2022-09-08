#include <stdio.h>

int main(){
    int linhas;
    char letra;

    scanf("%d %c", &linhas, &letra);
    linhas--;
    int x1 = 1, x2 = linhas;


    for(int i = 1; i <= linhas; i++)
    {
        for (int j = 1; j <= linhas; j++)
        {
            if (x1 == x2)
            {
                if (j == x1)
                {
                    printf("%c", letra);
                    break;
                } else {
                    printf(" ");
                }
                
            }
            else if (j == x1)
            {
                printf("%c", letra);
            } 
            else if (j == x2)
            {
                printf("%c", letra);
            }
            else {
                printf(" ");
            }
        }
        
        x1++;
        x2--;

        printf("\n");
    }

    return 0;
}