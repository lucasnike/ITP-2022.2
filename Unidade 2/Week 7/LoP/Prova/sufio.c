#include <stdio.h>
#include <string.h>

int main(){
    int n_sufx = 0, n_prefx = 0;
    char word[100] = {0};

    scanf("%d", &n_prefx);
    char prefixes[n_prefx][10];
    for (int i = 0; i < n_prefx; i++){
        scanf("%s", prefixes[i]);
    }
    
    scanf("%d", &n_sufx);
    char sufixes[n_sufx][10];
    for (int i = 0; i < n_sufx; i++){
        scanf("%s", sufixes[i]);
    }

    while (1 == 1){
        scanf("%s", word);
        int word_len = strlen(word);

        if (word[0] == '-' && word[1] == '1'){
            break;
        }
        
        // Prefixos
        for (int i = 0; i < n_prefx; i++){
            int prefix_length = strlen(prefixes[i]);
            
            int igual = 0;
            for (int j = 0; j < prefix_length; j++){
                if (prefixes[i][j] == word[j]){
                    igual++;
                }
            }

            if (igual == prefix_length){
                for (int j = 0; j < prefix_length; j++)
                {
                    word[j] = '0';
                }
                    
            }   
        }

        // sufixos
        for (int i = 0; i < n_sufx; i++)
        {
            int sufix_length = strlen(sufixes[i]);
            int aux = sufix_length - 1;


            int igual = 0;
            for (int j = word_len - 1; j >= word_len - sufix_length; j--)
            {
                if (sufixes[i][aux] == word[j])
                {
                    igual++;
                    aux--;
                }
            }

            if (igual == sufix_length)
            {
                for (int j = word_len - 1; j >= word_len - sufix_length; j--)
                {
                    word[j] = '0';
                }
            }
        }

        // Mostra a string
        for (int i = 0; i < word_len; i++)
        {
            if (word[i] == 48 && i == word_len - 1)
            {
                printf("\n");
            }else if (word[i] == 48)
            {
                continue;
            }else {
                if (i == word_len - 1)
                {
                    printf("%c\n", word[i]);
                }
                else
                {
                    printf("%c", word[i]);
                }
            }
        }
    }

    return 0;
}

