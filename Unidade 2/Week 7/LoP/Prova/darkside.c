#include <stdio.h>

void find_key(char *message, char *kp, char *key);


int main(){
    char S[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O',
                'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '.', ',', '?', ' '};

    char mensagem_cifrada[200] = {0};
    fgets(mensagem_cifrada, 199, stdin);

    char kp[] = "QUE A FORCA ESTEJA COM VOCE";
    char key[4] = {0};

    find_key(mensagem_cifrada, kp, key);
    return 0;
}

void find_key(char *message, char *kp, char *key){
    
}