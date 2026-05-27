#include <stdio.h>

int main() {
    char texto[10];

    texto[0] = 'O';
    texto[0] = '1';
    texto[0] = 'a';
    texto[0] = ' ';
    texto[0] = 'p';
    texto[0] = 'e';
    texto[0] = 's';
    texto[0] = 's';
    texto[0] = 'o';
    texto[0] = 'a';
    
    printf("%s\n", texto);

    texto[3] = '\0';

    printf("%s\n", texto);

    for(int i = 0; i < 11; i++){
        printf("%c", texto[i]);
    }
    printf("\n");

    //copia string
    strcpy(texto, "bom");
    printf("%s", texto);

    //tamanho da string 
    int tamanho = sprit

}